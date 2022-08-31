#!/bin/bash
namespace="hub-exercise"
source_path="/home/exercises"
exercise="/exercise1"
stack_name="hub"
if [ "$(kubectl get ns $namespace -o json | jq .status.phase -r)" == "Active" ]
then
  echo "namespace $namespace already exists"
  exit 0
else
  rm -f blackduck.yaml
  kubectl create ns $namespace
  openssl req \
   -newkey rsa:2048 \
   -x509 \
   -nodes \
   -keyout $source_path$exercise/server.key \
   -new \
   -out $source_path$exercise/server.crt \
   -subj /CN=exercises.kube.com \
   -reqexts SAN \
   -extensions SAN \
   -config <(cat $source_path/certs/openssl.cnf \
       <(printf '[SAN]\nsubjectAltName=DNS:exercises.kube.alt.com')) \
   -sha256 \
   -days 3650
  kubectl create secret generic $stack_name-blackduck-webserver-certificate -n $namespace --from-file=WEBSERVER_CUSTOM_CERT_FILE=$source_path$exercise/server.crt --from-file=WEBSERVER_CUSTOM_KEY_FILE=$source_path$exercise/server.key
  rm -Rf $source_path$exercise/kubernetes $source_path$exercise/blackduck.yaml
  cp -R /home/hub/kubernetes/ /home/exercises$exercise/
  kubectl apply -f /home/exercises/chart/sc.yaml
  helm install hub-exercise --namespace hub-exercise $source_path$exercise/kubernetes/blackduck/  --set enablePersistentStorage=true --set postgres.isExternal=false --set sealKey=blackduckblackduckblackduckblack --set exposeui=true --set exposedServiceType=LoadBalancer --set enableSourceCodeUpload=true --set enableBinaryScanner=true --set tlsCertSecretName=$stack_name-blackduck-webserver-certificate --set postgres.adminPassword=blackduck --set postgres.userUserName=blackduck_user --set postgres.userPassword=blackduck -f $source_path$exercise/kubernetes/blackduck/sizes-gen03/10sph.yaml --set environs.PUBLIC_HUB_WEBSERVER_PORT=8443 --dry-run > $source_path$exercise/blackduck.yaml
  kubectl -n $namespace apply -f $source_path$exercise/blackduck.yaml --validate=false
fi
