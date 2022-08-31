#if 0
	shc Version 4.0.3, Generic Shell Script Compiler
	GNU GPL Version 3 Md Jahidul Hamid <jahidulhamid@yahoo.com>

	shc -r -f exercise1/deploy.sh 
#endif

static  char data [] = 
#define      shll_z	10
#define      shll	((&data[0]))
	"\357\314\063\360\042\271\160\072\307\310"
#define      lsto_z	1
#define      lsto	((&data[10]))
	"\302"
#define      xecc_z	15
#define      xecc	((&data[14]))
	"\272\200\231\276\054\254\114\337\060\207\203\105\176\215\003\240"
	"\014\206\130\006"
#define      tst1_z	22
#define      tst1	((&data[31]))
	"\342\127\125\205\136\135\123\130\171\347\301\321\316\377\274\210"
	"\165\276\326\023\046\070\143\236\055"
#define      msg2_z	19
#define      msg2	((&data[59]))
	"\312\270\220\132\302\277\116\300\075\375\322\321\166\035\126\351"
	"\275\252\335\036\114\004\134"
#define      opts_z	1
#define      opts	((&data[79]))
	"\020"
#define      rlax_z	1
#define      rlax	((&data[80]))
	"\274"
#define      text_z	1880
#define      text	((&data[246]))
	"\341\271\246\207\164\047\041\314\055\166\326\320\331\165\376\200"
	"\020\127\112\311\347\247\221\241\323\061\217\064\334\351\362\276"
	"\243\230\106\027\277\147\344\355\336\272\276\270\060\275\070\100"
	"\024\203\012\374\053\234\235\377\315\054\063\252\026\045\150\271"
	"\276\256\321\175\026\265\153\364\160\051\255\240\346\345\341\373"
	"\150\353\367\224\207\224\223\125\301\306\377\327\354\147\220\252"
	"\026\141\050\054\027\224\041\207\275\316\047\244\263\010\237\034"
	"\364\227\260\173\053\104\321\355\013\320\304\367\070\125\242\116"
	"\267\313\172\317\137\234\126\035\152\176\301\036\207\141\073\173"
	"\370\354\367\044\060\310\021\073\230\326\063\320\054\325\037\344"
	"\241\232\263\001\066\124\121\236\223\040\070\113\314\070\202\266"
	"\221\164\045\235\114\054\203\060\320\350\134\212\224\226\041\241"
	"\174\200\245\026\206\045\201\157\057\277\356\241\244\005\146\245"
	"\152\205\222\250\137\024\065\013\265\212\364\316\120\125\033\064"
	"\010\061\051\051\164\341\343\064\115\104\163\114\011\151\136\152"
	"\271\166\120\024\257\117\160\025\353\314\150\140\067\262\103\162"
	"\330\347\041\323\244\001\251\060\371\362\101\343\362\063\101\002"
	"\056\352\377\137\243\026\170\330\231\167\241\335\124\014\177\222"
	"\230\223\101\363\065\014\202\106\326\240\151\232\376\143\072\137"
	"\322\103\322\113\201\067\037\100\177\003\055\113\100\323\221\213"
	"\273\214\040\113\232\172\016\330\112\305\366\072\111\373\240\245"
	"\004\164\160\034\366\202\352\247\050\127\365\014\007\324\143\262"
	"\341\033\146\164\044\262\165\306\130\056\172\140\211\172\146\123"
	"\101\340\305\043\272\061\114\360\263\225\113\304\307\212\230\241"
	"\321\021\305\313\013\211\146\220\046\072\242\146\354\162\350\045"
	"\300\344\044\031\061\166\036\124\371\246\041\232\215\064\236\374"
	"\171\023\007\302\266\130\221\220\045\366\063\354\164\224\267\015"
	"\215\070\205\252\143\050\107\303\201\043\314\110\103\102\347\211"
	"\012\174\252\322\345\315\227\114\327\225\364\114\221\151\361\003"
	"\152\253\264\013\144\111\305\103\007\004\246\305\275\027\224\177"
	"\310\272\134\236\233\114\235\152\040\124\262\037\075\336\227\005"
	"\015\132\326\300\053\146\173\131\100\135\210\276\336\251\270\223"
	"\343\036\200\206\336\053\146\201\153\010\177\014\277\000\376\346"
	"\136\330\310\200\132\153\235\356\045\336\005\301\371\114\337\373"
	"\130\155\351\254\127\162\332\303\345\321\012\226\272\351\140\333"
	"\200\024\165\242\221\352\215\013\135\261\207\315\222\130\140\363"
	"\230\034\111\332\025\252\013\102\273\271\011\014\032\225\362\045"
	"\206\235\360\033\252\026\016\022\162\226\325\232\112\355\261\135"
	"\340\271\246\247\327\053\224\136\374\213\160\332\262\317\107\331"
	"\271\333\122\150\141\040\176\021\047\356\331\263\031\146\140\346"
	"\210\152\264\074\316\073\070\047\144\271\346\264\227\214\366\316"
	"\356\144\377\352\360\172\247\172\160\064\266\250\065\231\171\005"
	"\144\025\031\135\350\141\214\022\367\357\310\104\372\145\107\261"
	"\001\137\007\105\267\052\230\364\375\253\066\352\372\103\156\333"
	"\333\025\012\211\215\375\124\276\122\163\152\160\022\162\171\024"
	"\370\124\043\046\033\015\003\174\072\130\113\204\211\355\000\077"
	"\123\154\232\330\244\131\014\222\164\071\352\351\213\156\122\357"
	"\120\104\324\235\264\201\346\073\126\127\244\250\115\074\116\115"
	"\152\220\010\111\164\173\121\010\334\107\016\326\264\122\176\343"
	"\133\070\212\321\327\056\117\247\330\300\120\032\002\057\052\171"
	"\262\057\324\034\110\103\111\115\321\207\076\062\346\163\022\273"
	"\164\262\001\150\003\306\160\010\344\157\027\262\176\053\213\266"
	"\006\213\107\054\177\066\204\340\043\346\206\312\356\224\365\372"
	"\023\004\357\251\015\257\365\072\220\102\157\331\104\311\005\310"
	"\352\143\011\374\360\020\051\332\135\177\054\306\172\314\045\072"
	"\045\377\360\204\224\271\060\006\312\071\143\272\107\261\314\252"
	"\005\045\271\224\324\371\137\077\023\122\147\162\261\214\267\113"
	"\112\034\375\204\174\105\310\346\112\326\254\253\227\052\234\275"
	"\203\325\165\072\271\324\216\174\367\144\173\073\020\015\131\135"
	"\134\305\277\236\135\047\227\344\233\360\160\024\010\074\067\030"
	"\144\170\076\175\343\041\360\105\033\314\166\343\157\250\162\263"
	"\354\077\234\117\014\236\367\000\251\311\061\023\114\020\211\347"
	"\376\202\315\011\304\156\022\325\317\143\105\204\274\061\234\264"
	"\141\172\133\130\233\176\304\376\145\317\072\262\004\175\035\171"
	"\175\243\152\305\260\330\020\212\221\044\044\073\015\154\073\047"
	"\316\370\155\310\263\371\071\226\102\362\154\004\323\324\102\175"
	"\064\007\101\052\017\073\274\160\354\065\302\222\130\363\146\036"
	"\240\024\120\260\176\013\040\074\331\370\063\222\072\377\135\333"
	"\320\267\223\002\274\063\235\113\367\345\334\100\171\225\352\321"
	"\236\272\334\316\043\316\167\221\357\241\342\311\251\344\012\004"
	"\200\250\257\222\062\200\375\250\043\202\106\076\342\047\316\342"
	"\243\253\370\302\041\361\316\250\175\312\045\061\013\152\174\075"
	"\131\323\011\207\271\370\371\220\124\271\116\313\355\302\073\234"
	"\177\133\275\014\252\047\013\037\120\055\302\132\310\363\227\332"
	"\233\072\327\227\117\025\221\045\010\232\103\060\052\071\130\357"
	"\270\203\362\034\261\142\045\310\226\265\331\201\126\027\115\051"
	"\101\144\264\334\347\057\011\050\351\140\271\165\354\305\073\271"
	"\146\106\216\164\266\045\155\232\066\022\241\036\276\246\003\226"
	"\355\037\362\366\336\226\275\017\074\330\011\351\315\340\040\270"
	"\361\310\303\126\363\233\143\023\304\214\025\370\361\164\014\350"
	"\170\141\150\277\046\134\317\223\207\274\342\236\004\265\375\362"
	"\253\061\327\327\175\263\034\270\251\112\350\221\027\363\337\131"
	"\064\220\027\377\373\272\225\355\022\000\320\212\346\300\344\024"
	"\172\006\354\357\214\202\036\253\052\354\333\003\346\132\131\303"
	"\072\305\236\056\104\341\111\003\040\104\363\201\204\103\217\355"
	"\166\074\231\154\100\110\370\023\202\306\016\267\040\003\256\252"
	"\343\253\362\104\260\350\113\132\341\352\063\172\033\225\241\205"
	"\020\277\220\347\163\227\172\327\123\016\210\051\211\254\110\036"
	"\031\322\215\377\014\140\045\061\301\360\066\020\045\250\172\326"
	"\145\045\232\204\322\015\004\044\155\170\054\262\167\331\240\223"
	"\334\052\031\225\070\221\037\310\145\237\205\142\256\370\247\220"
	"\246\273\027\006\067\061\273\051\134\154\212\326\233\120\127\102"
	"\054\126\277\055\101\344\133\120\364\325\213\030\153\202\001\200"
	"\104\323\337\172\110\212\244\213\247\015\264\162\306\026\146\167"
	"\173\077\012\000\346\175\102\073\122\327\251\302\155\032\334\360"
	"\202\116\356\227\157\312\355\312\275\026\324\135\044\256\021\165"
	"\162\016\256\141\016\212\307\256\156\361\341\173\272\327\064\045"
	"\205\271\010\362\023\307\124\270\226\360\050\201\344\344\272\050"
	"\363\045\274\223\041\136\314\055\220\144\240\040\061\117\130\265"
	"\211\201\037\377\251\150\153\104\307\274\007\352\256\106\310\073"
	"\311\124\331\253\242\342\006\063\173\000\315\333\244\037\161\326"
	"\242\010\075\311\356\140\317\351\210\211\154\154\170\065\051\026"
	"\167\372\127\002\325\120\154\127\243\034\120\100\205\027\170\234"
	"\344\234\131\125\277\214\026\315\024\120\230\253\105\306\300\372"
	"\121\070\330\115\372\075\220\164\136\102\056\172\255\132\075\062"
	"\307\110\135\334\206\350\304\154\112\046\070\126\300\153\336\305"
	"\327\123\106\043\016\355\276\024\003\127\023\023\341\242\044\200"
	"\045\123\301\064\151\224\351\006\102\307\067\222\062\175\101\262"
	"\220\176\152\160\377\100\214\110\225\142\077\213\247\330\113\164"
	"\357\271\222\131\334\125\137\176\114\204\104\211\031\231\105\217"
	"\017\002\272\070\270\364\042\112\245\130\015\232\305\200\153\116"
	"\024\312\172\056\137\314\317\343\011\252\144\125\015\016\223\226"
	"\130\210\043\250\005\254\063\233\110\261\352\330\117\242\151\054"
	"\034\072\237\320\223\332\334\006\375\016\161\255\211\257\332\077"
	"\077\351\022\112\306\010\074\102\002\151\352\053\073\313\040\335"
	"\004\251\134\277\220\110\157\056\257\034\014\330\012\110\025\127"
	"\140\354\152\071\346\213\105\114\023\046\104\055\173\053\042\326"
	"\045\263\215\232\007\262\127\113\265\364\117\125\105\320\075\223"
	"\066\255\237\056\235\062\045\340\121\257\105\227\224\052\172\047"
	"\015\172\147\256\323\173\163\371\317\310\043\072\172\010\053\327"
	"\241\343\251\160\166\375\356\023\031\255\145\336\120\364\021\324"
	"\362\271\255\271\375\126\272\374\343\120\204\046\375\370\132\055"
	"\261\054\025\010\151\341\337\163\216\374\267\055\141\365\353\022"
	"\242\260\120\201\143\231\315\253\304\167\134\325\244\344\053\031"
	"\220\263\245\061\227\347\367\162\172\266\202\234\333\265\223\375"
	"\166\153\256\242\253\326\130\337\026\027\155\262\305\027\017\232"
	"\324\272\375\327\264\146\072\154\215\024\247\105\167\042\074\175"
	"\016\113\335\022\173\136\025\175\064\025\034\137\206\012\036\241"
	"\210\340\277\017\102\372\212\072\346\202\137\027\112\161\122\343"
	"\110\205\264\165\133\323\131\375\155\015\376\244\027\035\105\240"
	"\375\004\257\077\377\072\172\346\274\331\375\006\113\120\352\223"
	"\325\236\010\061\161\142\056\336\157\055\202\207\112\310\047\110"
	"\315\327\210\314\021\002\263\316\334\261\325\050\001\277\273\327"
	"\135\304\010\316\047\067\255\227\145\060\037\257\370\106\370\305"
	"\036\200\222\060\203\106\376\140\367\323\210\370\223\104\317\360"
	"\011\330\277\060\017\155\310\164\236\347\044\227\056\034\135\114"
	"\235\357\174\040\065\172\200\055\116\010\045\342\115\365\322\126"
	"\315\222\206\335\000\117\121\236\066\166\065\144\223\222\260\060"
	"\202\054\120\270\247\320\345\366\331\013\330\046\000\253\174\315"
	"\075\003\252\076\122\374\334\210\163\022\355\006\245\235\066\047"
	"\312\206\337\161\127\305\147\060\320\100\127\321\353\323\236\051"
	"\327\111\147\052\106\104\262\272\126\240\300\373\075\366\042\010"
	"\175\002\171\324\310\341\005\230\041\135\151\015\061\010\066\010"
	"\122\235\062\231\341\345\123\070\205\023\063\303\012\126\313\207"
	"\131\105\134\041\047\142\271\111\277\043\126\360\054\214\371\176"
	"\052\054\027\014\021\152\104\227\176\170\132\210\316\046\020\050"
	"\153\155\111\223\320\003\334\220\046\063\201\122\300\172\321\352"
	"\246\350\367\270\123\073\117\321\264\251\132\203\320\153\253\074"
	"\330\364\317\250\367\253\071\036\337\272\161\237\064\102\211\332"
	"\053\201\222\177\275\342\120\161\214"
#define      tst2_z	19
#define      tst2	((&data[2478]))
	"\026\237\230\357\230\140\315\141\140\033\245\365\100\062\210\053"
	"\145\117\257\014\122\032\252\224"
#define      chk1_z	22
#define      chk1	((&data[2501]))
	"\023\321\252\306\323\344\251\162\026\030\010\371\356\121\227\241"
	"\226\037\166\360\145\104\253\231\244\362\213\033"
#define      chk2_z	19
#define      chk2	((&data[2529]))
	"\033\232\212\255\174\110\115\157\225\302\144\240\110\213\173\057"
	"\156\066\352\072\233\064\235"
#define      date_z	1
#define      date	((&data[2549]))
	"\263"
#define      pswd_z	256
#define      pswd	((&data[2572]))
	"\233\005\300\370\033\140\220\013\364\370\243\200\014\164\053\377"
	"\377\107\221\277\245\255\376\052\135\105\245\365\121\250\213\220"
	"\326\041\100\052\142\015\260\364\220\373\125\072\360\115\317\146"
	"\272\274\252\237\006\250\311\144\355\157\131\076\030\344\316\357"
	"\005\017\031\150\034\312\134\254\306\261\347\267\377\266\035\271"
	"\163\307\131\171\157\043\335\134\223\067\233\253\033\151\233\041"
	"\171\265\211\225\177\345\102\106\227\052\375\226\340\032\120\123"
	"\341\251\315\121\314\253\255\137\342\111\013\375\263\246\037\054"
	"\133\250\302\333\216\004\041\045\057\036\273\017\070\013\143\032"
	"\265\061\153\201\334\031\341\276\142\355\274\025\223\333\102\357"
	"\203\004\312\022\011\353\067\070\011\363\110\101\376\253\134\264"
	"\335\307\065\271\340\027\170\103\004\064\130\230\020\233\207\224"
	"\237\121\246\251\074\335\341\106\320\051\210\317\325\344\203\262"
	"\253\271\154\214\321\344\317\325\031\050\155\052\303\364\276\143"
	"\106\145\014\202\103\355\311\023\027\121\343\355\065\147\240\341"
	"\040\014\155\361\361\074\307\013\145\065\066\050\051\365\213\160"
	"\132\227\363\235\205\274\261\235\015\225\212\103\374\052\044\035"
	"\067\222\017\051\317\326\131\057\112\207\070\244\226\222\160\062"
	"\230\061\053\264\221\273\277\206\264\142\007\301\327\062\300\326"
	"\171\122\225\036\377\357\116\111\166\207\356\014\032\137\077\262"
	"\220\152\147\042\046\046\250\333\211"
#define      msg1_z	65
#define      msg1	((&data[2889]))
	"\341\135\067\133\257\314\172\257\274\310\336\376\100\336\320\353"
	"\074\306\173\142\202\150\310\143\015\275\216\231\326\377\223\363"
	"\301\320\010\022\003\355\155\017\000\134\352\057\353\227\313\335"
	"\116\312\037\065\071\000\044\270\273\030\045\160\221\170\117\144"
	"\357\020\305\342\100\155\311\113\074\227\060\370\062\120\347\077"
	"\152"
#define      inlo_z	3
#define      inlo	((&data[2960]))
	"\247\154\326"/* End of data[] */;
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
