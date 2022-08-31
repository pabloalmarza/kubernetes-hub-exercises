#if 0
	shc Version 4.0.3, Generic Shell Script Compiler
	GNU GPL Version 3 Md Jahidul Hamid <jahidulhamid@yahoo.com>

	shc -r -f exercise5/deploy.sh 
#endif

static  char data [] = 
#define      tst1_z	22
#define      tst1	((&data[0]))
	"\302\066\205\067\373\003\042\225\150\047\103\323\040\313\233\133"
	"\153\073\173\121\273\060\342\217\050\321\215"
#define      rlax_z	1
#define      rlax	((&data[27]))
	"\361"
#define      opts_z	1
#define      opts	((&data[28]))
	"\074"
#define      lsto_z	1
#define      lsto	((&data[29]))
	"\075"
#define      msg2_z	19
#define      msg2	((&data[31]))
	"\050\321\157\140\075\042\377\333\065\120\041\362\011\157\374\046"
	"\000\304\200\227\364"
#define      text_z	2015
#define      text	((&data[364]))
	"\306\236\021\117\274\060\311\306\031\254\126\102\176\343\373\022"
	"\046\247\144\250\023\237\017\265\335\103\335\322\344\174\172\252"
	"\033\213\372\330\274\303\236\326\157\365\030\355\331\023\000\000"
	"\273\145\250\317\004\270\204\342\373\142\265\340\336\057\212\372"
	"\273\204\322\170\110\161\116\270\147\147\246\100\173\246\100\066"
	"\014\351\006\020\241\212\363\235\354\251\175\313\331\007\306\224"
	"\214\231\014\325\013\133\215\162\302\064\262\075\333\362\164\347"
	"\333\172\370\175\005\353\032\362\224\227\276\155\237\204\002\053"
	"\036\017\001\051\152\216\233\054\302\116\151\236\101\335\205\034"
	"\130\175\232\135\151\264\117\375\114\015\153\353\222\156\027\260"
	"\175\030\332\347\247\165\024\152\303\175\010\004\133\215\041\263"
	"\012\274\020\163\160\140\161\274\156\335\250\000\114\277\261\311"
	"\330\213\261\177\001\306\351\305\103\362\311\237\177\353\122\212"
	"\247\143\376\030\303\157\325\062\115\175\062\231\075\343\143\025"
	"\157\025\225\160\333\177\065\037\161\377\276\360\353\021\173\223"
	"\165\171\253\070\351\201\152\066\377\235\320\074\201\064\122\360"
	"\112\350\140\046\147\225\105\330\225\004\311\200\026\104\023\213"
	"\275\276\304\247\100\057\336\077\314\256\174\116\343\316\076\055"
	"\266\237\123\036\065\231\366\312\236\300\112\265\004\135\100\302"
	"\034\005\151\134\064\107\234\001\366\131\306\223\075\017\006\352"
	"\140\365\032\250\104\260\357\176\137\251\206\033\372\047\244\003"
	"\067\177\372\057\106\033\104\156\220\251\270\206\344\370\221\054"
	"\213\254\115\344\277\137\050\004\367\261\367\060\161\337\173\232"
	"\013\251\334\166\154\002\167\063\242\371\033\174\053\112\371\231"
	"\015\241\120\133\370\103\000\257\246\053\323\053\104\074\130\160"
	"\167\156\102\024\313\210\142\227\171\243\103\064\107\343\164\140"
	"\126\011\022\231\146\246\217\342\054\077\074\340\361\043\011\215"
	"\055\270\142\061\056\151\241\145\075\037\244\301\213\360\111\244"
	"\254\377\145\177\012\006\262\113\200\025\345\124\252\035\377\271"
	"\255\104\123\301\301\016\361\261\117\313\366\262\172\037\362\010"
	"\157\175\364\006\155\226\076\362\050\310\070\023\332\324\004\317"
	"\075\137\250\220\242\256\327\373\055\271\106\045\041\062\077\122"
	"\377\216\210\106\010\013\377\360\242\111\146\012\014\374\205\025"
	"\131\134\376\075\024\131\007\207\035\276\047\235\321\001\261\136"
	"\010\370\141\240\260\177\050\316\051\363\352\242\111\217\016\265"
	"\005\133\222\373\017\363\210\044\200\340\176\127\105\337\201\321"
	"\207\026\120\000\013\046\370\077\273\055\332\133\203\261\371\263"
	"\024\224\227\376\140\353\352\276\026\052\314\077\230\322\274\027"
	"\006\242\201\122\342\174\333\326\266\160\027\160\235\315\356\012"
	"\165\246\137\366\100\005\025\057\010\313\276\162\116\374\323\107"
	"\310\016\175\363\256\376\047\127\263\171\376\322\136\357\352\364"
	"\346\264\046\052\357\204\031\146\101\237\056\220\326\300\025\050"
	"\114\370\235\354\304\321\250\052\171\323\343\277\104\373\243\073"
	"\174\065\237\131\017\071\256\357\044\256\120\344\015\110\023\244"
	"\243\323\245\343\201\316\161\054\034\244\275\073\255\243\316\003"
	"\011\315\030\362\024\103\142\357\376\304\125\352\207\075\057\053"
	"\343\242\102\003\273\076\043\341\231\303\352\161\320\003\172\025"
	"\165\011\345\303\337\003\355\127\043\363\124\323\217\252\371\333"
	"\027\127\315\155\060\247\044\152\233\121\151\112\176\217\214\336"
	"\004\010\365\140\060\121\042\220\142\222\132\157\355\026\342\025"
	"\173\250\154\124\231\000\022\320\075\317\166\373\266\372\061\357"
	"\256\074\061\020\267\241\057\337\366\250\105\040\113\277\115\351"
	"\130\202\157\000\243\207\170\016\257\321\167\316\370\142\030\010"
	"\247\247\377\272\256\134\310\035\353\243\057\250\157\064\000\204"
	"\155\117\215\043\106\016\340\127\045\214\061\070\361\022\210\240"
	"\100\234\261\355\357\350\333\035\331\171\321\137\233\222\000\346"
	"\022\031\137\322\337\246\365\233\200\330\171\015\066\103\324\221"
	"\272\171\133\044\034\020\302\147\021\210\111\121\063\117\270\176"
	"\030\176\314\114\050\354\341\121\366\023\330\236\205\153\362\067"
	"\307\151\143\217\025\064\356\035\244\037\141\172\033\153\037\256"
	"\114\246\200\162\327\055\067\273\075\062\343\202\003\106\333\275"
	"\063\106\174\147\006\255\064\255\317\241\210\310\326\143\377\054"
	"\257\320\352\133\322\276\026\174\037\161\351\312\106\242\362\372"
	"\356\367\375\154\073\320\112\024\156\330\166\245\364\164\322\161"
	"\263\121\156\037\174\114\360\267\006\011\112\077\303\232\175\117"
	"\157\276\262\330\124\155\217\037\101\265\107\076\247\115\021\231"
	"\203\372\220\277\157\351\276\277\332\263\103\256\376\221\044\257"
	"\374\022\036\063\331\154\220\111\171\237\017\061\337\150\155\165"
	"\221\032\166\127\147\025\367\051\120\345\166\340\305\305\317\376"
	"\175\276\104\232\132\034\350\024\305\003\130\164\107\000\232\215"
	"\124\002\111\302\032\166\135\252\062\303\364\252\272\307\264\307"
	"\041\051\254\073\001\155\277\051\065\036\142\041\012\077\366\123"
	"\103\031\266\047\011\004\036\256\267\323\123\320\160\053\142\057"
	"\034\302\120\002\137\070\323\154\352\175\063\364\031\011\043\147"
	"\142\372\373\027\172\174\133\203\372\062\357\244\371\015\171\024"
	"\044\075\263\177\035\125\345\046\111\127\132\203\337\165\102\340"
	"\366\252\047\105\203\123\067\003\126\304\216\144\353\237\265\363"
	"\231\303\351\131\137\055\225\303\211\037\154\344\103\270\076\231"
	"\132\376\111\066\023\217\174\347\342\211\345\352\133\253\034\225"
	"\236\222\025\054\372\017\214\151\113\060\366\310\105\374\005\125"
	"\062\251\165\023\247\213\276\213\321\007\302\202\154\211\162\021"
	"\030\102\303\365\162\034\265\243\047\215\254\343\005\025\347\300"
	"\125\271\156\251\020\153\370\313\224\145\252\363\170\276\305\156"
	"\236\174\106\310\151\106\115\260\276\202\003\313\372\162\240\053"
	"\232\330\211\037\037\271\163\015\261\132\254\332\014\043\165\032"
	"\106\013\370\201\044\223\030\333\012\372\244\352\346\143\264\070"
	"\105\037\161\302\076\100\215\065\214\103\263\132\125\205\137\345"
	"\166\277\136\063\255\125\366\213\105\257\125\275\132\320\361\041"
	"\333\345\215\344\300\152\227\307\363\360\010\317\243\225\075\214"
	"\375\215\065\237\372\114\023\213\145\325\020\352\256\031\007\367"
	"\333\237\027\311\067\153\307\247\366\073\022\012\071\372\021\217"
	"\007\276\330\044\271\302\130\133\213\252\367\324\244\255\211\024"
	"\337\003\164\333\000\332\230\147\217\041\170\011\210\035\035\264"
	"\057\040\140\061\016\032\017\214\141\045\137\256\266\155\021\157"
	"\124\115\055\237\300\253\236\355\332\222\055\016\216\053\363\011"
	"\333\276\211\276\100\161\225\046\214\323\154\150\261\304\252\133"
	"\216\351\040\110\166\160\327\104\151\204\134\365\164\266\102\104"
	"\262\301\151\077\326\240\371\322\005\063\252\150\340\313\264\323"
	"\311\011\055\130\375\112\155\115\121\340\056\171\033\034\310\333"
	"\142\362\030\337\300\244\373\057\226\040\354\024\351\200\242\236"
	"\276\331\310\061\263\062\064\144\353\176\261\335\323\070\116\207"
	"\216\037\271\276\304\132\247\101\207\055\133\214\006\214\040\016"
	"\337\346\350\202\020\233\144\075\304\265\375\262\045\212\166\043"
	"\212\065\262\316\005\354\305\027\041\146\345\014\211\144\143\031"
	"\110\117\301\375\210\126\205\017\271\365\114\073\006\055\005\311"
	"\152\150\230\131\024\131\271\140\352\077\372\116\242\000\317\303"
	"\001\215\327\133\233\007\177\371\144\162\114\310\125\334\177\261"
	"\130\263\317\125\075\105\236\205\212\255\146\134\162\207\104\176"
	"\075\013\201\327\220\370\225\135\062\370\124\232\021\023\312\154"
	"\120\337\150\304\136\267\273\030\133\221\175\103\130\023\310\132"
	"\034\025\222\313\246\154\211\050\272\313\011\300\120\074\261\367"
	"\032\321\345\324\355\304\170\241\014\223\273\004\100\063\252\363"
	"\052\157\206\226\116\011\070\267\325\071\234\250\166\373\153\077"
	"\237\121\045\204\016\372\352\017\054\166\005\340\362\257\007\025"
	"\361\025\221\322\003\171\155\157\240\206\350\354\247\110\364\111"
	"\217\331\277\026\032\234\134\045\162\200\002\033\365\064\112\057"
	"\342\070\271\343\202\262\214\205\233\355\015\027\203\341\323\372"
	"\026\352\372\344\304\205\077\240\226\121\151\211\061\301\327\300"
	"\161\123\215\134\055\200\367\101\262\216\232\152\036\065\316\357"
	"\075\003\153\353\154\364\261\125\230\175\001\126\114\020\234\041"
	"\010\066\073\020\213\007\341\257\245\072\230\074\301\136\324\035"
	"\355\035\327\343\377\145\142\075\124\211\046\354\123\305\064\310"
	"\006\172\037\217\226\063\246\126\374\046\233\351\330\340\043\313"
	"\344\037\053\022\003\270\130\157\345\111\200\307\236\124\024\043"
	"\132\101\346\033\023\275\044\342\337\135\123\234\065\233\123\316"
	"\025\225\323\001\263\113\347\210\360\372\250\375\274\275\120\157"
	"\356\112\153\132\331\033\020\331\042\023\375\107\324\237\167\240"
	"\030\013\373\263\345\236\072\230\325\351\217\306\350\010\143\270"
	"\072\010\264\253\311\270\233\302\046\330\267\375\160\330\226\155"
	"\367\316\341\205\227\106\377\223\240\057\345\213\371\202\353\376"
	"\206\237\332\345\065\207\375\067\267\011\322\037\177\202\202\050"
	"\201\221\057\325\153\051\067\150\036\317\071\362\245\360\131\310"
	"\026\260\063\025\300\236\323\105\377\246\033\242\143\160\125\376"
	"\266\016\347\073\267\026\125\116\365\301\225\334\012\020\156\263"
	"\074\213\060\276\205\106\042\264\330\261\261\371\360\355\072\367"
	"\353\121\146\360\132\307\327\020\317\210\003\123\340\070\366\135"
	"\015\006\245\221\003\011\175\212\154\100\337\174\333\210\063\365"
	"\117\161\036\161\106\056\055\265\261\214\332\000\065\346\245\206"
	"\302\250\345\372\120\304\015\051\262\220\154\141\166\217\114\105"
	"\100\101\243\016\235\242\132\205\336\072\147\043\055\013\047\177"
	"\033\312\335\254\013\136\236\160\261\250\231\323\112\317\065\300"
	"\311\152\053\132\156\303\207\070\007\220\215\126\327\326\167\321"
	"\324\375\024\361\006\035\252\036\241\150\001\045\105\326\114\115"
	"\140\033\200\314\300\323\272\173\053\104\317\322\110\271\307\005"
	"\027\215\013\254\054\374\113\222\063\343\204\154\032\001\337\006"
	"\224\222\346\173\240\373\337\302\030\117\332\347\216\007\236\056"
	"\133\274\143\365\263\056\224\163\170\111\167\326\212\072\362\217"
	"\244\117\303\354\353\305\342\004\025\274\353\244\304\211\322\040"
	"\105\065\026\370\143\252\153\334\364\343\262\176\036\245\016\302"
	"\365\322\256\341\227\221\345\254\116\320\120\023\132\043\063\237"
	"\131\112\230\275\365\004\231\351\350\114\150\006\362\166\311\347"
	"\110\167\311\340\011\256\215\130\177\336\153\331\001\237\171\132"
	"\351\021\027\336\026\261\310\376\376\060\004\360\247\315\330\360"
	"\105\241\320\117\120\135\247\320\073\023\251\074\262\042\227\234"
	"\064\257\173\112\141\103\111\137\164\116\120\034\034\051\014\141"
	"\312\334\261\033\071\130\353\165\154\225\262\036\270\111\273\354"
	"\371\066\067\132\172\201\272\357\317\012\013\353\063\027\115\376"
	"\364\376\032\055\127\005\243\303\233\125\342\123\236\236\100\230"
	"\324\170\362\117\371\254\077\310\267\113\264\352\142\002\351\126"
	"\001\003\204\130\011\047\034\244\174\377\367\033\235\070\264\162"
	"\260\247\302\251\123\001\162\013\114\047\366\257\051\337\006\052"
	"\342\213\203\353\262\240\217\057\237\207\113\075\277\377\257\157"
	"\246\162\031\372\163\214\005\300\263\374\160\335\333\166\010\275"
	"\002\213\251\264\054\070\344\314\300\057\011\177\057\271\357\326"
	"\053\010\320\237\225\326\140\111\322\320\046\256\107\057\153\111"
	"\272\024\376\347\115\342\263\015\022\274\215\102\166\174\030\241"
	"\205"
#define      tst2_z	19
#define      tst2	((&data[2709]))
	"\300\326\050\302\222\025\361\110\303\214\215\101\243\302\005\303"
	"\011\333\134\041"
#define      chk2_z	19
#define      chk2	((&data[2729]))
	"\161\203\160\175\223\302\351\006\004\156\251\017\075\116\263\374"
	"\031\211\255\145\212\101"
#define      pswd_z	256
#define      pswd	((&data[2797]))
	"\001\164\301\000\134\017\342\017\034\365\314\251\067\102\046\120"
	"\343\253\071\044\306\371\305\052\215\066\265\316\357\157\173\361"
	"\344\075\361\100\114\324\117\151\311\034\023\001\136\071\121\273"
	"\127\006\315\254\174\352\307\026\023\037\045\124\264\075\217\343"
	"\344\130\176\254\235\006\306\214\227\301\327\301\315\323\174\044"
	"\331\112\321\126\064\231\155\110\270\222\234\155\320\054\120\265"
	"\204\317\141\042\325\047\257\155\350\207\057\266\132\253\333\064"
	"\366\254\213\052\106\370\163\377\213\017\154\133\073\274\020\300"
	"\213\162\342\141\232\221\317\203\031\376\071\163\251\025\250\240"
	"\302\063\313\010\053\076\007\267\115\164\023\211\060\044\112\274"
	"\226\055\036\060\277\355\263\330\353\355\114\225\003\364\065\305"
	"\050\001\315\123\077\325\013\215\111\036\027\172\102\141\067\330"
	"\216\125\011\115\103\275\045\056\253\161\304\256\146\372\163\216"
	"\373\101\342\073\027\355\310\140\013\337\333\116\101\022\047\317"
	"\150\060\035\253\356\103\332\231\265\236\110\033\231\273\251\224"
	"\375\214\317\024\171\230\165\205\167\120\323\270\143\372\210\313"
	"\053\245\166\031\351\121\263\236\357\373\271\210\267\143\035\265"
	"\357\355\311\151\205\077\356\375\220\302\266\363\275\076\277\351"
	"\344\065\003\315\206\266\154\166\262\045\377\152\211\035\037\101"
	"\345\213\146\254\204\053\327\022\141\215\340\121\374\134\102\341"
	"\231\063\042\346\007\162\117\320\216\142\322\354\234\043\056\202"
	"\256\224\056\063\277\005\105\041\222\046"
#define      chk1_z	22
#define      chk1	((&data[3099]))
	"\264\161\034\345\275\164\067\065\115\214\375\032\225\050\174\342"
	"\013\352\055\356\022\207\213\317\234\350\223\002"
#define      msg1_z	65
#define      msg1	((&data[3124]))
	"\162\021\051\263\115\067\052\054\035\017\253\063\237\271\270\340"
	"\006\327\004\106\306\253\144\306\151\114\224\115\232\361\051\072"
	"\340\254\354\036\346\276\366\200\165\312\317\137\334\263\157\247"
	"\152\301\123\147\210\311\027\202\330\331\367\062\341\135\102\275"
	"\043\300\224\264\222\200"
#define      inlo_z	3
#define      inlo	((&data[3194]))
	"\111\373\167"
#define      date_z	1
#define      date	((&data[3197]))
	"\114"
#define      shll_z	10
#define      shll	((&data[3199]))
	"\006\061\325\312\361\136\343\174\077\147\240"
#define      xecc_z	15
#define      xecc	((&data[3209]))
	"\144\233\302\057\061\125\136\162\175\023\235\005\337\136\356\004"
	"\227"/* End of data[] */;
#define      hide_z	4096
#define SETUID 0	/* Define as 1 to call setuid(0) at start of script */
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	1	/* Define as 1 to enable ptrace the executable */
#define HARDENING	0	/* Define as 1 to disable ptrace/dump the executable */
#define BUSYBOXON	0	/* Define as 1 to enable work with busybox */

#if HARDENING
static const char * shc_x[] = {
"/*",
" * Copyright 2019 - Intika <intika@librefox.org>",
" * Replace ******** with secret read from fd 21",
" * Also change arguments location of sub commands (sh script commands)",
" * gcc -Wall -fpic -shared -o shc_secret.so shc_secret.c -ldl",
" */",
"",
"#define _GNU_SOURCE /* needed to get RTLD_NEXT defined in dlfcn.h */",
"#define PLACEHOLDER \"********\"",
"#include <dlfcn.h>",
"#include <stdlib.h>",
"#include <string.h>",
"#include <unistd.h>",
"#include <stdio.h>",
"#include <signal.h>",
"",
"static char secret[128000]; //max size",
"typedef int (*pfi)(int, char **, char **);",
"static pfi real_main;",
"",
"// copy argv to new location",
"char **copyargs(int argc, char** argv){",
"    char **newargv = malloc((argc+1)*sizeof(*argv));",
"    char *from,*to;",
"    int i,len;",
"",
"    for(i = 0; i<argc; i++){",
"        from = argv[i];",
"        len = strlen(from)+1;",
"        to = malloc(len);",
"        memcpy(to,from,len);",
"        // zap old argv space",
"        memset(from,'\\0',len);",
"        newargv[i] = to;",
"        argv[i] = 0;",
"    }",
"    newargv[argc] = 0;",
"    return newargv;",
"}",
"",
"static int mymain(int argc, char** argv, char** env) {",
"    //fprintf(stderr, \"Inject main argc = %d\\n\", argc);",
"    return real_main(argc, copyargs(argc,argv), env);",
"}",
"",
"int __libc_start_main(int (*main) (int, char**, char**),",
"                      int argc,",
"                      char **argv,",
"                      void (*init) (void),",
"                      void (*fini)(void),",
"                      void (*rtld_fini)(void),",
"                      void (*stack_end)){",
"    static int (*real___libc_start_main)() = NULL;",
"    int n;",
"",
"    if (!real___libc_start_main) {",
"        real___libc_start_main = dlsym(RTLD_NEXT, \"__libc_start_main\");",
"        if (!real___libc_start_main) abort();",
"    }",
"",
"    n = read(21, secret, sizeof(secret));",
"    if (n > 0) {",
"      int i;",
"",
"    if (secret[n - 1] == '\\n') secret[--n] = '\\0';",
"    for (i = 1; i < argc; i++)",
"        if (strcmp(argv[i], PLACEHOLDER) == 0)",
"          argv[i] = secret;",
"    }",
"",
"    real_main = main;",
"",
"    return real___libc_start_main(mymain, argc, argv, init, fini, rtld_fini, stack_end);",
"}",
"",
0};
#endif /* HARDENING */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

#if HARDENING

#include <sys/ptrace.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/prctl.h>
#define PR_SET_PTRACER 0x59616d61

/* Seccomp Sandboxing Init */
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

#include <sys/types.h>
#include <sys/prctl.h>
#include <sys/syscall.h>
#include <sys/socket.h>

#include <linux/filter.h>
#include <linux/seccomp.h>
#include <linux/audit.h>

#define ArchField offsetof(struct seccomp_data, arch)

#define Allow(syscall) \
    BPF_JUMP(BPF_JMP+BPF_JEQ+BPF_K, SYS_##syscall, 0, 1), \
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_ALLOW)

struct sock_filter filter[] = {
    /* validate arch */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, ArchField),
    BPF_JUMP( BPF_JMP+BPF_JEQ+BPF_K, AUDIT_ARCH_X86_64, 1, 0),
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),

    /* load syscall */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, offsetof(struct seccomp_data, nr)),

    /* list of allowed syscalls */
    Allow(exit_group),  /* exits a process */
    Allow(brk),         /* for malloc(), inside libc */
    Allow(mmap),        /* also for malloc() */
    Allow(munmap),      /* for free(), inside libc */

    /* and if we don't match above, die */
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),
};
struct sock_fprog filterprog = {
    .len = sizeof(filter)/sizeof(filter[0]),
    .filter = filter
};

/* Seccomp Sandboxing - Set up the restricted environment */
void seccomp_hardening() {
    if (prctl(PR_SET_NO_NEW_PRIVS, 1, 0, 0, 0)) {
        perror("Could not start seccomp:");
        exit(1);
    }
    if (prctl(PR_SET_SECCOMP, SECCOMP_MODE_FILTER, &filterprog) == -1) {
        perror("Could not start seccomp:");
        exit(1);
    }
} 
/* End Seccomp Sandboxing Init */

void shc_x_file() {
    FILE *fp;
    int line = 0;

    if ((fp = fopen("/tmp/shc_x.c", "w")) == NULL ) {exit(1); exit(1);}
    for (line = 0; shc_x[line]; line++)	fprintf(fp, "%s\n", shc_x[line]);
    fflush(fp);fclose(fp);
}

int make() {
	char * cc, * cflags, * ldflags;
    char cmd[4096];

	cc = getenv("CC");
	if (!cc) cc = "cc";

	sprintf(cmd, "%s %s -o %s %s", cc, "-Wall -fpic -shared", "/tmp/shc_x.so", "/tmp/shc_x.c -ldl");
	if (system(cmd)) {remove("/tmp/shc_x.c"); return -1;}
	remove("/tmp/shc_x.c"); return 0;
}

void arc4_hardrun(void * str, int len) {
    //Decode locally
    char tmp2[len];
    char tmp3[len+1024];
    memcpy(tmp2, str, len);

	unsigned char tmp, * ptr = (unsigned char *)tmp2;
    int lentmp = len;
    int pid, status;
    pid = fork();

    shc_x_file();
    if (make()) {exit(1);}

    setenv("LD_PRELOAD","/tmp/shc_x.so",1);

    if(pid==0) {

        //Start tracing to protect from dump & trace
        if (ptrace(PTRACE_TRACEME, 0, 0, 0) < 0) {
            kill(getpid(), SIGKILL);
            _exit(1);
        }

        //Decode Bash
        while (len > 0) {
            indx++;
            tmp = stte[indx];
            jndx += tmp;
            stte[indx] = stte[jndx];
            stte[jndx] = tmp;
            tmp += stte[indx];
            *ptr ^= stte[tmp];
            ptr++;
            len--;
        }

        //Do the magic
        sprintf(tmp3, "%s %s", "'********' 21<<<", tmp2);

        //Exec bash script //fork execl with 'sh -c'
        system(tmp2);

        //Empty script variable
        memcpy(tmp2, str, lentmp);

        //Clean temp
        remove("/tmp/shc_x.so");

        //Sinal to detach ptrace
        ptrace(PTRACE_DETACH, 0, 0, 0);
        exit(0);
    }
    else {wait(&status);}

    /* Seccomp Sandboxing - Start */
    seccomp_hardening();

    exit(0);
}
#endif /* HARDENING */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

void chkenv_end(void);

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask = (unsigned long)getpid();
	stte_0();
	 key(&chkenv, (void*)&chkenv_end - (void*)&chkenv);
	 key(&data, sizeof(data));
	 key(&mask, sizeof(mask));
	arc4(&mask, sizeof(mask));
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

void chkenv_end(void){}

#if HARDENING

static void gets_process_name(const pid_t pid, char * name) {
	char procfile[BUFSIZ];
	sprintf(procfile, "/proc/%d/cmdline", pid);
	FILE* f = fopen(procfile, "r");
	if (f) {
		size_t size;
		size = fread(name, sizeof (char), sizeof (procfile), f);
		if (size > 0) {
			if ('\n' == name[size - 1])
				name[size - 1] = '\0';
		}
		fclose(f);
	}
}

void hardening() {
    prctl(PR_SET_DUMPABLE, 0);
    prctl(PR_SET_PTRACER, -1);

    int pid = getppid();
    char name[256] = {0};
    gets_process_name(pid, name);

    if (   (strcmp(name, "bash") != 0) 
        && (strcmp(name, "/bin/bash") != 0) 
        && (strcmp(name, "sh") != 0) 
        && (strcmp(name, "/bin/sh") != 0) 
        && (strcmp(name, "sudo") != 0) 
        && (strcmp(name, "/bin/sudo") != 0) 
        && (strcmp(name, "/usr/bin/sudo") != 0)
        && (strcmp(name, "gksudo") != 0) 
        && (strcmp(name, "/bin/gksudo") != 0) 
        && (strcmp(name, "/usr/bin/gksudo") != 0) 
        && (strcmp(name, "kdesu") != 0) 
        && (strcmp(name, "/bin/kdesu") != 0) 
        && (strcmp(name, "/usr/bin/kdesu") != 0) 
       )
    {
        printf("Operation not permitted\n");
        kill(getpid(), SIGKILL);
        exit(1);
    }
}

#endif /* HARDENING */

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PT_ATTACHEXC) /* New replacement for PT_ATTACH */
   #if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
       #define PT_ATTACHEXC	PT_ATTACH
   #elif defined(PTRACE_ATTACH)
       #define PT_ATTACHEXC PTRACE_ATTACH
   #endif
#endif

void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PT_ATTACHEXC, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = argv[0];
	if (me == NULL) { me = getenv("_"); }
	if (me == 0) { fprintf(stderr, "E: neither argv[0] nor $_ works."); exit(1); }

	ret = chkenv(argc);
	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
#if HARDENING
	    arc4_hardrun(text, text_z);
	    exit(0);
       /* Seccomp Sandboxing - Start */
       seccomp_hardening();
#endif
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
#if BUSYBOXON
	varg[j++] = "busybox";
	varg[j++] = "sh";
#else
	varg[j++] = argv[0];		/* My own name at execution */
#endif
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if SETUID
   setuid(0);
#endif
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if HARDENING
	hardening();
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
