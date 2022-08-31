#if 0
	shc Version 4.0.3, Generic Shell Script Compiler
	GNU GPL Version 3 Md Jahidul Hamid <jahidulhamid@yahoo.com>

	shc -r -f exercise3/deploy.sh 
#endif

static  char data [] = 
#define      chk1_z	22
#define      chk1	((&data[4]))
	"\252\346\033\324\074\221\340\375\062\144\064\301\301\163\213\144"
	"\117\004\060\120\036\126\127\237\211\335\163\345\224\146"
#define      msg2_z	19
#define      msg2	((&data[33]))
	"\356\365\330\147\056\370\134\167\357\231\131\270\210\304\044\051"
	"\340\030\266\171\133\224"
#define      tst1_z	22
#define      tst1	((&data[56]))
	"\004\254\045\247\220\234\013\265\200\366\135\021\205\157\363\265"
	"\223\075\242\346\324\275\211\115\321\050\263\346\144\362\207"
#define      tst2_z	19
#define      tst2	((&data[87]))
	"\246\236\306\214\374\371\225\122\130\336\203\052\043\224\326\321"
	"\316\251\224\171\245\202\071"
#define      rlax_z	1
#define      rlax	((&data[106]))
	"\272"
#define      opts_z	1
#define      opts	((&data[107]))
	"\166"
#define      shll_z	10
#define      shll	((&data[110]))
	"\056\315\042\005\232\041\073\104\121\273\304\352\123"
#define      text_z	1850
#define      text	((&data[403]))
	"\255\110\130\125\374\076\271\356\306\235\324\342\104\163\250\320"
	"\055\103\321\315\162\070\015\111\263\073\026\007\344\262\072\221"
	"\373\222\347\370\321\240\347\227\076\274\171\202\057\042\123\135"
	"\145\044\052\327\135\067\040\021\163\067\030\130\352\122\352\345"
	"\345\321\336\267\161\305\117\260\201\311\062\261\353\205\016\120"
	"\252\071\050\007\160\110\031\344\200\061\074\152\204\047\120\152"
	"\370\056\042\152\364\161\032\165\073\115\047\046\322\066\167\175"
	"\157\237\205\340\350\236\304\151\320\001\323\125\050\043\300\041"
	"\122\342\213\106\124\246\274\217\363\344\266\306\032\056\103\211"
	"\316\311\151\267\150\056\040\070\060\363\216\131\027\116\172\152"
	"\061\006\260\206\254\155\026\237\121\314\145\153\373\251\365\311"
	"\162\137\200\332\216\240\023\276\224\242\030\254\360\223\026\042"
	"\231\306\250\106\064\276\345\206\213\113\362\206\365\347\117\150"
	"\106\320\102\325\161\126\224\005\370\254\261\351\077\307\014\331"
	"\216\265\037\303\163\005\111\377\121\073\205\106\042\325\256\151"
	"\246\361\076\027\107\322\034\100\177\316\052\277\225\067\230\044"
	"\354\270\347\137\275\060\137\017\153\345\125\216\272\003\367\141"
	"\364\066\170\074\011\224\175\210\142\250\240\032\074\304\100\143"
	"\055\044\051\350\172\230\131\001\315\121\102\224\344\106\013\040"
	"\236\344\167\025\361\235\356\245\110\211\133\246\104\043\021\063"
	"\334\166\040\230\117\156\122\327\164\107\105\360\176\167\224\140"
	"\107\255\205\006\264\065\236\266\176\075\005\136\243\000\010\054"
	"\264\315\001\037\104\076\176\372\112\224\155\067\126\362\207\332"
	"\372\041\315\011\162\210\211\327\004\272\274\120\227\311\325\153"
	"\216\246\100\037\153\273\372\155\175\354\227\074\316\257\027\235"
	"\203\353\235\337\252\133\371\322\232\346\223\340\250\154\143\001"
	"\030\344\002\040\060\172\211\152\235\111\165\263\273\307\227\004"
	"\161\076\173\353\225\114\267\121\144\217\304\331\144\345\123\313"
	"\112\120\346\120\240\235\273\227\010\113\172\345\042\157\265\312"
	"\142\143\341\105\371\360\272\140\037\050\045\266\342\061\052\064"
	"\315\066\220\356\067\063\033\132\143\200\047\156\147\024\362\144"
	"\301\261\043\211\276\015\366\361\263\155\170\274\305\125\202\016"
	"\144\273\134\360\322\244\124\207\031\205\004\374\257\353\276\372"
	"\100\226\266\077\337\253\105\111\126\233\055\140\160\235\064\042"
	"\310\257\234\215\010\223\075\065\367\330\237\223\247\004\144\106"
	"\140\310\025\033\240\020\200\256\260\320\100\017\103\261\271\301"
	"\154\276\120\164\125\254\243\270\123\150\335\245\122\103\362\120"
	"\244\325\303\316\174\365\020\337\171\152\035\135\073\377\334\141"
	"\103\130\002\102\052\043\364\317\311\007\377\105\110\160\054\304"
	"\156\070\301\123\135\342\026\014\277\137\140\052\114\156\023\127"
	"\235\223\355\111\166\054\307\221\114\115\303\247\250\311\140\061"
	"\261\176\207\264\214\262\060\017\205\070\020\054\175\177\044\203"
	"\117\135\174\215\124\263\166\106\062\264\106\100\135\217\013\246"
	"\226\265\137\144\315\144\336\200\353\115\237\326\275\105\046\204"
	"\271\163\264\102\303\327\276\362\151\303\221\150\157\210\240\360"
	"\221\272\160\265\272\061\161\007\116\002\163\234\210\322\074\262"
	"\242\255\347\020\003\364\212\253\140\342\171\133\267\026\306\205"
	"\114\302\220\267\074\243\242\055\233\062\104\261\352\017\263\072"
	"\070\354\106\331\374\231\353\116\005\001\261\202\177\311\355\331"
	"\350\317\073\342\000\154\342\153\107\232\001\160\301\177\066\030"
	"\327\101\256\326\213\154\372\311\107\145\217\017\151\113\171\120"
	"\371\234\354\147\133\060\026\041\272\230\131\226\267\360\220\337"
	"\362\045\203\055\300\024\206\123\103\342\302\115\036\034\234\044"
	"\136\247\203\311\366\023\271\371\374\345\007\010\055\041\312\251"
	"\253\114\254\367\124\004\157\125\032\077\324\236\106\006\102\007"
	"\156\277\230\053\045\205\043\254\270\042\014\361\014\072\216\122"
	"\115\252\174\040\103\354\336\237\275\373\216\231\353\135\140\222"
	"\122\065\023\220\361\335\121\250\121\165\322\257\360\114\302\377"
	"\235\031\376\333\177\216\056\251\357\272\151\044\007\050\354\377"
	"\036\333\272\313\027\115\204\205\035\356\052\015\006\006\327\251"
	"\356\353\214\311\052\236\364\164\172\144\124\322\312\071\121\074"
	"\240\014\256\320\261\305\105\237\026\226\216\121\226\242\223\042"
	"\116\015\350\160\246\352\105\146\332\164\170\371\257\316\243\330"
	"\144\003\357\054\156\231\322\175\222\037\314\167\135\344\045\135"
	"\343\334\245\357\103\224\356\225\141\355\373\142\102\175\035\020"
	"\231\004\322\010\163\207\102\243\042\364\131\245\307\216\037\003"
	"\037\316\037\342\227\017\027\261\035\366\116\372\076\014\304\210"
	"\266\120\256\052\357\170\066\306\145\107\313\120\130\240\002\063"
	"\052\055\244\137\372\115\272\150\001\264\165\360\022\300\033\115"
	"\221\267\171\230\217\177\034\203\157\214\337\101\364\141\246\363"
	"\162\003\214\145\267\114\330\006\262\310\367\005\304\201\072\214"
	"\353\276\317\277\023\216\311\135\363\330\310\157\072\214\042\172"
	"\010\012\370\271\260\035\370\206\053\231\371\170\142\134\356\145"
	"\267\261\042\276\353\066\021\320\374\103\140\001\107\264\175\266"
	"\261\212\163\140\370\010\160\001\306\255\101\013\215\374\166\011"
	"\211\037\214\272\046\225\201\163\340\273\121\043\323\040\104\252"
	"\157\365\251\041\242\116\216\140\247\035\202\147\163\126\145\260"
	"\266\245\022\006\011\145\266\102\112\072\074\373\015\360\371\106"
	"\220\021\307\304\035\355\133\070\124\155\373\354\174\367\341\050"
	"\015\144\144\104\202\004\157\052\052\252\362\310\070\343\221\265"
	"\316\074\165\070\252\317\111\107\360\314\230\236\212\226\114\013"
	"\207\324\366\317\272\012\106\247\110\360\244\054\355\301\055\057"
	"\153\310\320\320\315\060\326\053\233\044\173\334\316\147\321\354"
	"\371\022\305\142\055\331\054\070\142\212\225\306\307\176\042\334"
	"\244\371\036\365\141\103\150\146\141\002\157\100\077\051\106\153"
	"\015\112\361\143\011\243\312\073\045\140\243\233\325\113\251\233"
	"\045\274\373\335\003\266\153\332\031\113\132\255\336\243\300\020"
	"\243\066\046\303\237\160\340\016\363\275\251\025\234\371\365\361"
	"\110\063\010\245\052\345\112\320\322\220\172\354\320\130\207\135"
	"\315\236\245\137\016\271\036\257\251\023\260\327\032\115\121\063"
	"\030\372\141\033\243\064\110\240\103\037\115\111\377\356\205\350"
	"\167\153\171\351\302\002\033\137\114\202\206\261\046\020\123\374"
	"\214\007\133\027\256\116\216\226\264\054\202\254\245\142\013\026"
	"\055\151\024\377\316\234\131\344\264\051\216\310\327\150\224\311"
	"\121\162\240\354\024\310\006\215\330\211\326\335\206\011\320\116"
	"\217\241\237\323\275\175\306\246\137\030\260\275\325\021\037\223"
	"\320\167\264\170\112\205\071\370\173\205\177\207\230\053\365\366"
	"\167\255\353\207\037\074\267\151\315\002\113\270\142\137\307\215"
	"\233\271\370\276\337\174\066\216\133\313\305\056\027\317\065\062"
	"\254\137\333\312\157\015\335\305\273\226\223\327\130\227\043\011"
	"\271\034\125\024\166\013\156\370\257\134\215\342\310\252\056\370"
	"\121\016\125\037\303\212\267\116\156\071\213\115\216\134\236\026"
	"\210\072\003\317\154\322\320\250\267\342\337\231\166\172\217\041"
	"\023\310\111\237\212\272\332\276\251\134\316\177\233\121\312\106"
	"\106\252\306\003\050\371\134\021\112\111\015\334\373\374\255\377"
	"\106\042\064\254\160\317\213\245\200\024\356\037\054\115\034\251"
	"\274\256\121\006\003\363\132\204\105\131\354\107\160\101\045\352"
	"\077\252\000\354\106\312\063\013\305\076\340\302\310\055\243\313"
	"\071\241\150\151\236\116\303\305\207\341\276\325\057\266\240\020"
	"\367\043\231\272\372\175\055\211\226\346\167\316\164\305\230\267"
	"\051\050\370\022\246\141\233\171\245\024\077\073\232\365\027\167"
	"\001\175\242\130\322\367\116\155\115\335\134\206\226\260\033\334"
	"\152\114\016\324\110\127\353\103\276\046\210\003\154\014\331\143"
	"\112\244\155\045\023\361\234\252\024\320\106\363\145\174\233\027"
	"\240\052\150\276\332\007\302\061\161\172\376\011\052\007\124\227"
	"\147\207\017\322\061\355\165\167\221\005\024\337\031\141\121\344"
	"\070\046\017\024\177\333\274\166\317\377\147\253\262\165\330\355"
	"\045\344\070\010\341\315\112\005\243\110\075\123\060\303\074\162"
	"\111\051\206\055\320\137\334\103\361\224\324\172\014\146\272\301"
	"\215\330\045\041\230\210\045\012\153\011\101\005\136\172\322\110"
	"\026\006\354\032\302\235\262\231\257\223\012\211\234\234\027\135"
	"\047\362\302\270\271\224\312\244\006\025\043\166\220\012\023\224"
	"\274\241\165\005\346\166\140\343\033\056\242\036\344\132\305\053"
	"\163\310\320\035\020\225\107\353\331\345\213\111\017\022\101\232"
	"\340\262\016\274\324\042\004\041\366\162\063\161\112\047\364\211"
	"\021\065\324\044\031\064\023\073\056\003\335\117\245\224\055\053"
	"\115\201\127\301\055\277\372\135\354\325\373\271\331\334\107\206"
	"\015\243\065\324\335\050\230\001\127\045\332\206\175\043\035\065"
	"\311\357\176\303\255\343\117\212\323\053\222\004\104\376\340\012"
	"\224\250\330\345\116\374\222\022\225\260\004\165\126\105\042\161"
	"\116\071\123\103\134\046\171\344\075\005\203\250\073\232\364\172"
	"\303\275\225\205\122\001\250\113\075\237\353\302\227\104\034\324"
	"\203\222\116\350\061\116\117\000\324\123\172\040\030\247\263\340"
	"\351\344\137\146\107\370\337\340\034\313\230\003\053\126\063\212"
	"\145\237\157\273\055\052\276\044\213\263\133\003\360\144\230\156"
	"\354\373\026\063\364\365\024\020\301\255\024\354\003\107\166\151"
	"\347\346\044\024\020\343\071\233\227\224\237\210\370\070\366\344"
	"\063\014\030\047\002\054\070\304\332\114\260\336\224\047\107\173"
	"\015\154\217\036\120\310\271\350\134\131\160\124\221\146\071\304"
#define      lsto_z	1
#define      lsto	((&data[2345]))
	"\130"
#define      chk2_z	19
#define      chk2	((&data[2348]))
	"\071\130\165\323\201\076\370\356\272\265\317\031\041\272\335\334"
	"\050\307\345\363\000"
#define      pswd_z	256
#define      pswd	((&data[2426]))
	"\005\022\176\200\037\353\017\075\073\330\367\044\065\120\224\211"
	"\341\372\303\246\155\024\222\343\223\267\035\354\050\007\043\055"
	"\032\241\256\071\215\276\167\311\226\156\355\313\277\201\125\240"
	"\173\030\107\351\055\332\314\301\221\352\255\125\035\072\357\165"
	"\241\123\374\213\344\044\271\057\043\156\241\115\044\064\225\063"
	"\137\337\206\131\375\307\020\374\017\334\122\054\027\101\242\270"
	"\225\236\104\171\303\375\250\346\153\111\064\220\175\311\304\335"
	"\251\113\067\247\022\110\243\042\045\366\117\074\070\361\364\315"
	"\217\071\106\123\066\357\072\242\071\156\063\267\070\370\224\341"
	"\103\314\211\126\024\055\170\072\043\307\166\133\271\153\050\111"
	"\244\157\234\333\137\326\175\230\105\261\117\175\251\344\137\355"
	"\260\350\103\305\026\274\377\071\203\166\225\075\342\276\206\207"
	"\055\043\142\214\371\340\045\076\221\164\274\073\130\033\050\011"
	"\004\153\316\032\047\315\124\253\104\351\350\046\247\157\255\325"
	"\222\020\142\214\360\207\313\202\374\207\275\124\243\345\135\250"
	"\121\053\303\171\371\030\044\076\001\015\144\251\175\022\177\020"
	"\042\341\234\023\151\150\226\145\360\123\271\223\071\027\074\213"
	"\103\377\004\075\027\051\173\031\067\340\303\265\363\102\305\026"
	"\044\142\051\215\312\300\362\272\023\254\116\115\304\212\331\007"
	"\212\335\105\242\007\300\274\076\241\177\363\272\362\321\350\014"
	"\162\226\105\000\124\275\311\353"
#define      date_z	1
#define      date	((&data[2695]))
	"\105"
#define      msg1_z	65
#define      msg1	((&data[2699]))
	"\213\264\045\350\232\165\121\344\125\103\100\142\002\237\310\215"
	"\370\310\152\215\262\236\175\350\116\372\076\240\275\030\066\131"
	"\012\332\337\374\253\321\044\237\123\265\023\042\216\210\170\265"
	"\342\322\234\275\263\355\145\214\304\307\237\056\175\073\140\116"
	"\113\270\230\073"
#define      inlo_z	3
#define      inlo	((&data[2764]))
	"\346\104\020"
#define      xecc_z	15
#define      xecc	((&data[2768]))
	"\077\030\313\067\015\364\035\176\266\124\166\302\015\316\312\034"/* End of data[] */;
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
