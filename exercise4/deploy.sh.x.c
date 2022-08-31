#if 0
	shc Version 4.0.3, Generic Shell Script Compiler
	GNU GPL Version 3 Md Jahidul Hamid <jahidulhamid@yahoo.com>

	shc -r -f exercise4/deploy.sh 
#endif

static  char data [] = 
#define      inlo_z	3
#define      inlo	((&data[0]))
	"\104\042\017"
#define      chk2_z	19
#define      chk2	((&data[5]))
	"\130\022\156\361\020\312\027\275\046\076\213\336\171\213\013\140"
	"\151\107\365\121\306\244\031\255"
#define      date_z	1
#define      date	((&data[27]))
	"\175"
#define      lsto_z	1
#define      lsto	((&data[28]))
	"\026"
#define      xecc_z	15
#define      xecc	((&data[30]))
	"\257\017\357\224\032\147\130\074\051\107\132\233\116\177\205\122"
	"\151\221\156"
#define      rlax_z	1
#define      rlax	((&data[48]))
	"\124"
#define      chk1_z	22
#define      chk1	((&data[54]))
	"\113\115\004\256\111\067\141\123\061\317\135\256\251\146\042\077"
	"\160\156\265\173\124\271\232\366\226\013\007\153\155"
#define      msg2_z	19
#define      msg2	((&data[80]))
	"\273\054\001\057\247\062\312\245\233\336\256\234\230\002\101\326"
	"\100\201\317\200\330"
#define      shll_z	10
#define      shll	((&data[100]))
	"\256\371\325\313\020\013\004\362\075\035\026\043"
#define      tst2_z	19
#define      tst2	((&data[115]))
	"\267\244\337\111\132\065\015\347\113\055\056\314\221\121\023\313"
	"\355\016\045\370\355\320\162\023\221"
#define      opts_z	1
#define      opts	((&data[136]))
	"\133"
#define      tst1_z	22
#define      tst1	((&data[141]))
	"\320\312\041\031\154\225\330\376\242\375\152\361\017\367\250\043"
	"\252\331\350\105\251\175\007\305\047\173\066\217"
#define      text_z	1836
#define      text	((&data[489]))
	"\167\340\343\033\205\222\076\144\207\264\033\053\224\145\076\045"
	"\356\244\115\161\152\300\102\065\341\134\153\161\030\040\023\217"
	"\001\367\252\206\211\350\352\020\235\006\074\061\153\172\127\132"
	"\037\244\313\211\145\016\276\107\152\052\270\202\112\313\021\114"
	"\302\273\322\114\244\275\134\101\303\230\162\057\023\312\211\062"
	"\156\125\273\323\143\172\032\316\244\322\120\357\236\142\073\141"
	"\035\016\255\302\313\011\003\217\242\166\276\265\100\110\350\257"
	"\236\243\203\002\036\235\320\302\160\040\262\017\202\356\160\240"
	"\374\036\143\307\050\147\126\312\335\025\200\036\136\150\316\374"
	"\013\121\376\051\357\316\354\137\357\236\157\162\214\337\023\211"
	"\375\166\120\045\335\247\360\273\275\160\332\033\330\250\027\344"
	"\372\025\016\351\344\373\111\323\232\270\105\046\227\131\260\225"
	"\317\000\273\255\250\253\150\146\033\103\201\364\354\231\331\346"
	"\257\347\317\223\342\031\147\174\321\255\243\151\006\123\376\325"
	"\124\272\203\375\145\354\143\201\057\344\166\033\175\117\002\054"
	"\066\322\300\031\353\047\225\274\324\071\045\333\215\044\261\341"
	"\336\064\337\104\040\102\305\120\047\073\154\245\213\156\322\301"
	"\100\222\333\053\272\161\350\217\252\016\152\070\062\033\031\021"
	"\117\371\125\160\073\033\300\143\127\054\010\342\233\333\244\334"
	"\155\177\010\050\361\360\267\234\376\041\324\061\075\356\102\214"
	"\347\230\375\043\264\057\276\306\053\301\253\140\007\144\112\123"
	"\000\230\013\024\001\263\151\342\307\236\046\337\172\306\001\161"
	"\024\001\303\316\114\345\201\151\135\103\350\244\242\232\326\062"
	"\121\210\052\147\010\226\073\311\365\057\375\350\074\060\374\303"
	"\045\114\343\202\267\236\174\344\252\167\307\304\373\216\173\163"
	"\226\275\215\356\042\137\146\266\074\321\375\124\075\050\364\107"
	"\316\024\230\157\231\224\377\074\322\200\342\357\054\024\056\221"
	"\021\321\233\135\054\271\353\121\240\072\002\205\073\112\267\172"
	"\132\135\030\317\163\322\314\335\036\127\075\204\151\022\256\373"
	"\141\206\167\103\204\363\166\245\201\364\174\333\363\225\171\016"
	"\071\143\316\164\324\227\264\156\052\317\372\025\071\003\215\041"
	"\114\271\076\151\267\153\211\307\032\350\255\113\367\131\364\077"
	"\352\123\167\310\247\027\202\164\310\072\320\212\064\170\373\353"
	"\053\322\075\110\325\126\244\255\337\275\372\320\371\174\040\047"
	"\266\102\333\257\275\322\134\377\363\111\354\263\177\274\143\365"
	"\075\061\027\056\152\046\154\165\012\203\363\006\331\072\002\034"
	"\166\122\220\250\300\102\325\361\333\314\117\031\253\236\315\006"
	"\272\232\320\125\312\317\224\356\256\225\364\207\163\150\353\230"
	"\041\277\161\317\043\237\017\365\112\314\216\225\027\067\224\166"
	"\353\033\003\047\050\110\125\021\345\144\133\154\025\076\205\202"
	"\325\165\365\361\335\026\352\011\132\150\263\141\006\371\015\124"
	"\275\012\235\327\270\241\056\115\212\167\074\240\203\134\165\115"
	"\114\110\017\340\270\321\237\143\344\274\165\305\013\324\307\240"
	"\165\355\112\343\176\013\305\125\372\325\125\142\321\165\000\271"
	"\247\062\040\017\117\256\261\324\125\307\234\324\220\024\233\320"
	"\105\027\257\121\013\325\273\347\124\110\220\371\070\215\345\040"
	"\037\105\227\133\371\066\035\236\164\131\004\365\336\152\141\006"
	"\001\055\077\052\103\136\317\142\212\243\203\111\016\256\311\017"
	"\324\345\033\221\242\313\126\151\340\156\166\346\246\047\105\307"
	"\220\060\223\162\054\155\214\367\133\143\065\320\022\213\023\260"
	"\111\067\135\342\310\110\332\263\212\360\372\047\311\313\364\021"
	"\227\141\151\356\372\340\251\212\046\132\066\344\264\161\006\171"
	"\225\345\256\311\315\074\251\235\160\031\261\246\322\044\244\256"
	"\000\061\051\032\151\366\156\337\175\023\170\240\056\013\124\145"
	"\152\027\074\342\377\362\375\147\041\250\253\141\335\133\270\043"
	"\046\012\044\270\237\374\023\000\037\224\064\014\307\235\071\244"
	"\010\176\116\071\356\015\232\015\310\125\307\052\060\206\272\373"
	"\253\120\373\205\350\107\240\334\212\062\370\264\345\152\152\150"
	"\205\123\002\144\122\367\114\303\224\320\144\201\310\130\010\247"
	"\113\242\202\140\012\156\032\070\203\265\242\216\231\325\327\340"
	"\120\000\123\167\130\302\165\274\354\224\271\043\314\152\177\076"
	"\121\041\075\251\371\255\047\043\316\022\207\105\335\334\060\110"
	"\263\264\135\335\243\270\243\311\174\372\376\252\000\331\275\314"
	"\146\061\027\237\066\312\352\336\141\271\345\131\304\132\273\167"
	"\034\062\120\010\306\345\327\022\132\050\354\041\155\365\103\210"
	"\271\331\214\037\347\301\160\062\072\070\245\243\175\320\363\331"
	"\344\337\015\042\026\112\066\075\363\333\164\072\310\312\074\372"
	"\367\004\205\326\014\316\121\375\010\014\342\026\112\150\310\162"
	"\125\110\123\356\104\344\072\003\264\011\302\373\162\315\217\323"
	"\345\067\110\147\110\033\005\371\215\375\055\251\054\162\355\135"
	"\225\120\056\322\040\332\133\143\150\174\061\125\317\276\126\013"
	"\311\055\201\150\144\153\033\324\061\012\332\205\217\304\217\357"
	"\001\236\372\111\274\106\042\266\362\131\264\127\335\356\316\215"
	"\050\025\356\226\060\147\253\175\372\327\220\272\202\006\240\144"
	"\161\130\206\077\004\176\242\012\343\320\327\111\217\027\241\157"
	"\234\034\162\100\045\206\161\112\171\313\006\330\011\224\005\162"
	"\015\176\220\157\057\351\215\170\043\373\342\347\160\366\361\220"
	"\354\134\231\022\071\270\272\011\350\353\001\003\013\335\122\052"
	"\346\123\053\313\043\125\300\200\062\217\161\152\120\344\211\365"
	"\142\014\174\160\134\216\064\253\235\246\310\115\216\341\153\026"
	"\005\212\242\106\204\035\302\163\255\375\314\053\141\240\325\003"
	"\254\216\036\040\143\247\374\045\232\232\340\105\231\372\350\203"
	"\267\266\304\214\245\042\276\117\066\265\020\304\337\233\172\056"
	"\177\144\174\377\377\342\123\061\324\173\000\012\006\060\251\225"
	"\260\223\346\356\025\144\064\371\347\321\260\337\301\015\005\117"
	"\374\204\353\367\322\304\264\107\334\163\322\314\207\211\336\074"
	"\272\116\106\366\376\035\361\300\337\333\140\325\151\243\331\211"
	"\053\342\176\044\212\233\330\250\231\013\312\352\140\111\111\260"
	"\335\066\042\360\303\176\155\116\231\065\173\004\176\055\052\077"
	"\110\243\127\156\265\175\060\007\106\167\333\361\044\101\322\225"
	"\207\343\012\122\315\332\044\152\177\007\330\006\202\314\074\165"
	"\027\154\310\365\117\102\063\005\157\052\147\220\120\365\253\271"
	"\217\121\273\113\074\133\060\214\164\343\056\334\033\023\120\201"
	"\221\024\334\341\176\154\117\351\241\045\150\117\162\223\273\330"
	"\257\310\060\361\103\115\073\223\021\171\354\201\233\246\236\325"
	"\135\303\061\001\105\060\215\334\255\055\332\374\243\375\052\250"
	"\356\125\147\174\022\246\327\352\113\135\105\101\242\231\255\006"
	"\273\356\370\056\317\363\176\067\072\104\366\164\030\336\276\044"
	"\143\066\350\034\370\217\161\007\361\145\147\124\354\304\246\210"
	"\363\325\252\024\166\102\245\023\310\344\327\067\244\230\160\252"
	"\322\362\311\005\260\072\033\260\211\260\340\322\302\036\174\163"
	"\006\146\120\236\177\071\210\255\074\026\365\212\104\116\243\253"
	"\206\324\024\171\214\054\367\036\270\010\372\074\240\201\351\241"
	"\172\166\251\347\002\352\342\044\027\251\163\336\266\061\354\166"
	"\350\254\136\170\247\342\027\307\256\053\363\151\305\363\330\032"
	"\045\260\025\253\314\211\134\265\072\155\114\164\146\260\206\074"
	"\024\210\162\244\344\156\241\117\161\146\013\300\173\012\300\127"
	"\061\307\152\324\042\355\336\356\067\245\171\323\260\250\357\161"
	"\357\167\005\100\157\156\365\334\116\277\262\106\006\362\055\170"
	"\102\045\376\177\243\061\223\204\100\047\126\370\041\204\340\226"
	"\276\074\234\005\064\107\140\167\301\065\130\234\325\100\044\132"
	"\001\310\103\024\061\267\152\241\305\235\143\315\172\270\205\260"
	"\212\061\030\156\330\200\314\203\361\143\137\133\027\151\263\241"
	"\041\324\120\174\105\270\045\047\301\230\140\007\210\302\164\336"
	"\341\243\275\037\355\253\264\202\221\057\264\245\356\135\167\200"
	"\237\331\151\162\340\237\125\373\373\114\024\240\175\036\210\107"
	"\214\076\322\240\042\207\177\133\055\107\034\317\332\313\275\176"
	"\066\022\260\120\362\213\320\250\030\120\110\075\155\106\264\101"
	"\004\374\304\210\021\177\030\225\003\015\200\171\012\130\176\337"
	"\044\224\250\364\247\107\005\070\173\333\260\266\310\000\305\007"
	"\264\320\001\376\232\116\257\060\334\042\137\165\277\056\332\355"
	"\031\157\163\270\074\132\074\066\333\072\357\116\351\061\144\371"
	"\055\146\056\351\260\203\352\013\075\323\264\157\230\300\325\150"
	"\256\256\230\214\122\241\042\033\153\075\224\327\276\134\042\125"
	"\152\305\203\367\311\202\241\237\004\347\212\011\054\110\046\045"
	"\262\360\367\160\036\334\022\351\330\226\072\126\067\267\033\220"
	"\340\116\156\156\323\022\215\170\104\253\377\076\305\111\230\151"
	"\137\137\111\020\300\347\250\252\046\252\061\173\175\100\166\155"
	"\271\014\011\027\076\215\112\310\345\156\026\273\253\314\042\264"
	"\157\350\340\162\333\243\115\174\217\133\324\320\211\062\346\105"
	"\271\204\005\221\016\245\031\272\327\057\131\123\041\005\201\051"
	"\316\252\243\223\325\256\126\226\356\340\355\056\070\017\145\361"
	"\372\360\144\261\047\015\356\064\203\103\342\352\007\357\142\373"
	"\321\322\136\375\152\070\114\212\243\221\304\154\237\201\222\006"
	"\022\130\337\354\066\117\207\114\214\030\217\144\354\220\222\276"
	"\263\276\206\012\353\217\355\206\152\221\142\330\021\152\000\002"
	"\133\267\236\132\331\163\213\026\141\316\243\110\146\241\153\031"
	"\137\362\044\112\201\022\321\353\244\063\303\265\236\304\270\372"
	"\174\127\124\125\312\340\154\054\256\020\164\024\261\340\056\021"
	"\322\123\133\123\145\054\077\011\140\003\277\377\307\170\371\103"
	"\320\116\231\232\056\006\306\334\026\073\361\310\033\040\331\356"
	"\164\065\102\332\142\202\344\303\205\243\302\115\034\274\221\354"
	"\012\052\207\070\061\116\025\110\211\007\020\245\047\352\223\234"
	"\040\326\166\202\130\132\105\335\376\010\053\032\304\274\006\317"
	"\346\215\010\030\333\036\140\145\045\161\012\115\133\236\351\174"
	"\164\137\377\314\271\105\252\267\115\325\322\022\222\330\342\171"
	"\146\352\221\102\010\361\247\056\142\262\173\276\120\145\072\305"
	"\304\071\222\176\177\074\066\314\022\010\337\245\341\301\036\107"
	"\254\257\212\265\240\061\343\003\343\137\302\064\304\374\371\211"
	"\066\213\007\266\310\076\202\333\106\142\200\050\044\236\160\320"
	"\116\372\206\357\054\152\362\017\311\264\104\216\261\075\030\350"
	"\311\040\236\222\136\041\155\245\204\356\315\250\214\076\171\333"
	"\070\377\312\144\151\274\164\063\161\270\302\043\366\332\014\277"
	"\372\253\121"
#define      pswd_z	256
#define      pswd	((&data[2667]))
	"\376\120\255\314\371\072\012\162\025\102\161\337\247\333\234\033"
	"\016\016\324\321\062\313\253\076\212\246\351\334\376\266\234\375"
	"\006\111\311\377\204\323\162\231\026\343\171\275\276\026\331\315"
	"\044\256\236\136\056\064\345\034\120\157\277\232\303\150\102\153"
	"\227\063\200\343\014\236\036\074\346\016\154\311\352\251\015\024"
	"\333\240\163\012\324\131\047\045\311\346\277\214\116\002\370\346"
	"\065\171\311\102\027\350\176\375\366\353\307\340\224\324\365\160"
	"\164\151\172\111\303\241\156\214\207\055\031\326\057\021\274\145"
	"\212\206\250\242\156\046\240\144\022\147\105\247\074\073\027\261"
	"\244\221\372\147\063\150\363\273\226\015\221\306\036\116\054\251"
	"\325\324\114\103\373\354\250\015\123\356\264\220\051\314\101\315"
	"\136\074\065\221\245\051\114\073\066\336\002\124\055\056\376\002"
	"\002\112\106\376\066\357\013\212\335\300\032\006\214\134\324\352"
	"\230\012\174\075\063\310\171\151\247\173\276\324\252\275\327\255"
	"\007\035\253\076\015\267\310\352\167\343\361\004\100\306\357\330"
	"\320\153\026\003\064\220\155\333\013\053\260\266\350\207\143\360"
	"\245\017\056\262\306\367\235\076\333\216\102\033\125\061\364\045"
	"\234\013\051\320\233\226\254\246\302\135\135\253\345\300\233\212"
	"\317\312\075\226\302\332\324\235\151\026\271\276\107\256\344\344"
	"\271\015\265\126\171\112\224\004\360\176\340\357\064\175\354\073"
	"\306\265\073\113\210\255\344\237\220\136\134\117\164\066\035\231"
	"\344\273\357\135\006\204\141\366\002\102\345\067\277\321\162\206"
	"\207\255\321"
#define      msg1_z	65
#define      msg1	((&data[2977]))
	"\257\354\025\014\073\211\307\303\247\213\043\077\301\114\355\170"
	"\043\033\274\144\335\034\003\172\277\002\324\372\232\320\347\256"
	"\107\134\107\032\214\231\231\373\151\315\006\063\353\352\132\242"
	"\254\014\075\264\023\144\064\234\101\243\010\327\312\121\170\141"
	"\042\102\274\255\157\254\326\102\130\042\047\024\022\204\032\226"
	"\346\020\231"/* End of data[] */;
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
