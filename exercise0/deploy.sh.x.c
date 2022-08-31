#if 0
	shc Version 4.0.3, Generic Shell Script Compiler
	GNU GPL Version 3 Md Jahidul Hamid <jahidulhamid@yahoo.com>

	shc -r -f exercise0/deploy.sh 
#endif

static  char data [] = 
#define      chk1_z	22
#define      chk1	((&data[2]))
	"\212\147\370\162\372\276\107\324\164\327\352\360\135\124\021\333"
	"\310\212\051\265\334\143\072\222\205\346\207"
#define      tst1_z	22
#define      tst1	((&data[29]))
	"\042\021\361\007\356\340\063\175\100\113\320\316\321\373\015\174"
	"\040\234\047\162\377\141\012\007\165\262\124\275\202"
#define      msg2_z	19
#define      msg2	((&data[59]))
	"\210\132\272\105\050\360\154\374\017\076\223\001\014\351\075\205"
	"\222\351\255\020\050\207\331"
#define      tst2_z	19
#define      tst2	((&data[80]))
	"\376\324\146\064\104\327\266\335\114\302\320\137\024\201\152\204"
	"\040\253\222\045\363\127"
#define      rlax_z	1
#define      rlax	((&data[101]))
	"\240"
#define      msg1_z	65
#define      msg1	((&data[115]))
	"\370\120\010\125\102\053\146\270\336\272\165\141\127\133\374\126"
	"\212\146\211\042\062\210\302\352\167\262\203\162\064\223\352\001"
	"\205\314\243\130\357\325\142\277\046\211\215\143\076\041\014\171"
	"\146\242\246\165\351\227\311\132\223\372\026\177\231\312\274\261"
	"\172\135\001\160\206\167\114\007\013\064\256\237\116\075\101\305"
	"\337\233\200\271\175\273\105"
#define      opts_z	1
#define      opts	((&data[189]))
	"\241"
#define      pswd_z	256
#define      pswd	((&data[194]))
	"\030\332\047\021\042\022\214\136\015\121\324\003\042\313\367\077"
	"\022\130\226\030\231\137\111\210\037\117\240\256\140\317\360\067"
	"\041\011\333\104\034\147\242\052\270\166\055\333\102\044\032\125"
	"\175\261\156\026\020\267\237\057\007\077\336\147\017\316\236\061"
	"\330\171\165\364\341\027\036\232\216\114\165\321\161\220\046\357"
	"\101\225\005\121\114\245\201\123\345\137\273\364\056\131\046\007"
	"\323\233\373\265\263\032\117\101\147\305\023\331\125\072\310\227"
	"\317\316\351\033\164\152\157\131\312\052\116\371\204\164\000\130"
	"\017\374\015\303\027\134\005\176\042\030\130\167\122\041\017\041"
	"\360\370\075\144\142\255\275\055\327\013\046\134\200\047\264\220"
	"\043\301\123\072\036\130\271\100\160\022\270\303\063\307\345\043"
	"\300\043\210\042\320\106\120\250\122\167\004\322\236\270\142\301"
	"\172\265\374\231\015\265\332\176\310\222\101\373\132\047\037\033"
	"\112\247\075\032\355\216\302\077\005\307\022\243\177\164\145\372"
	"\052\141\223\067\027\155\266\337\000\370\333\133\037\372\166\152"
	"\242\264\204\220\102\107\317\110\016\341\353\216\126\121\210\200"
	"\263\034\270\312\052\060\146\154\134\315\044\072\210\232\234\337"
	"\333\141\276\166\342\167\364\235\275\161\114\133\166\134\372\217"
	"\067\042\240\142\123\007\317\257\324\364\352\135"
#define      text_z	1786
#define      text	((&data[725]))
	"\151\351\373\340\313\163\325\151\060\107\265\213\275\022\206\114"
	"\111\251\355\253\374\364\172\254\311\156\227\046\374\036\142\146"
	"\007\136\107\322\321\035\073\001\144\361\215\042\003\024\157\114"
	"\275\134\370\272\120\162\146\031\341\375\100\336\033\242\105\043"
	"\000\214\365\322\251\061\324\016\042\141\060\046\165\237\163\063"
	"\373\153\355\114\336\123\146\277\121\246\236\155\111\343\220\112"
	"\160\206\034\032\270\360\050\333\122\130\001\310\370\164\373\363"
	"\337\350\100\276\074\246\176\216\115\034\374\226\377\214\341\157"
	"\023\375\211\314\356\262\247\100\013\250\011\003\035\004\367\375"
	"\354\067\273\051\335\071\267\053\125\263\302\125\100\243\305\124"
	"\241\117\040\217\001\310\320\014\161\331\017\216\336\006\213\313"
	"\076\107\364\034\200\254\107\326\140\011\054\241\254\361\366\116"
	"\100\027\336\102\337\257\116\120\211\136\337\147\145\152\062\244"
	"\262\047\300\063\323\007\011\064\021\065\326\276\047\314\014\147"
	"\343\352\251\302\231\370\023\042\127\362\211\215\003\273\053\216"
	"\217\240\272\076\222\243\165\056\230\074\144\253\035\317\224\112"
	"\166\350\276\265\140\100\317\054\362\325\373\201\257\105\017\146"
	"\057\116\171\366\211\264\361\264\013\166\076\173\351\056\243\242"
	"\076\126\351\063\131\333\220\255\374\375\161\063\154\153\147\143"
	"\044\327\271\251\343\046\116\241\067\162\065\070\010\257\113\064"
	"\303\062\136\022\052\113\113\070\242\031\173\063\253\212\156\100"
	"\251\056\135\232\323\055\166\145\123\176\030\102\316\160\131\074"
	"\205\164\033\024\255\337\174\373\350\041\154\107\371\037\175\175"
	"\050\073\063\161\323\263\267\131\375\047\353\107\370\222\044\140"
	"\326\372\351\317\026\270\247\222\205\066\210\074\217\077\002\167"
	"\012\164\274\130\105\113\123\247\272\330\364\365\343\177\113\227"
	"\367\072\242\375\355\157\231\044\165\037\131\144\235\153\366\147"
	"\262\221\352\153\202\071\101\145\125\222\234\276\304\357\337\156"
	"\274\052\064\243\336\327\271\026\103\124\243\140\205\336\150\202"
	"\361\007\140\320\241\327\041\373\065\022\130\125\041\267\212\331"
	"\127\203\177\141\361\044\210\252\041\353\366\155\232\103\314\137"
	"\266\064\216\044\343\355\350\070\372\363\074\021\214\361\201\311"
	"\121\006\370\217\052\015\170\064\262\317\166\240\067\063\313\307"
	"\310\324\317\154\220\103\077\376\066\251\367\210\015\030\243\362"
	"\374\267\252\261\133\106\106\057\024\137\320\216\333\020\046\002"
	"\327\201\125\376\041\262\376\143\167\133\014\355\244\352\124\177"
	"\256\023\147\055\314\302\340\105\237\120\333\361\151\305\036\062"
	"\105\077\255\154\236\272\054\356\240\337\041\265\151\271\131\332"
	"\202\266\065\232\143\133\122\224\173\367\254\344\276\267\112\027"
	"\102\015\252\225\373\361\160\054\205\227\267\362\117\147\167\324"
	"\143\335\153\134\005\161\224\106\003\167\015\072\235\310\105\356"
	"\021\350\265\031\212\142\331\372\350\156\266\006\254\164\101\345"
	"\257\334\223\242\252\220\333\335\130\134\050\100\161\243\361\067"
	"\065\113\373\250\017\156\026\056\145\321\234\076\323\042\312\173"
	"\005\363\347\156\110\354\114\245\266\170\217\233\016\120\160\206"
	"\053\073\154\270\043\262\021\051\130\333\103\301\213\142\101\063"
	"\110\271\002\207\005\116\352\025\247\131\166\232\163\230\002\362"
	"\172\130\026\241\001\032\055\315\256\273\134\013\012\132\144\255"
	"\035\330\011\167\162\050\363\305\060\053\132\347\227\337\261\057"
	"\211\101\172\025\353\063\010\311\125\375\270\373\266\141\254\000"
	"\007\320\065\053\210\053\015\311\005\235\341\101\115\004\354\137"
	"\133\075\102\224\042\051\045\101\213\110\337\021\263\252\202\333"
	"\300\003\323\170\341\306\204\200\073\074\363\127\302\253\177\156"
	"\033\370\152\270\337\102\104\122\212\105\137\130\357\340\163\307"
	"\162\053\105\334\175\143\214\114\377\172\302\277\321\242\205\364"
	"\270\130\153\306\150\260\121\334\365\376\242\352\062\146\232\331"
	"\237\036\302\267\171\143\214\136\267\134\052\260\052\253\343\222"
	"\267\205\127\056\241\304\156\060\041\147\030\171\063\367\031\216"
	"\012\164\320\157\131\251\272\254\002\172\024\237\007\161\122\252"
	"\350\206\131\172\325\202\245\057\154\155\063\010\207\002\151\203"
	"\024\202\360\311\157\230\027\015\052\104\013\372\140\260\015\105"
	"\076\327\033\344\324\014\140\335\346\035\320\326\231\252\162\154"
	"\353\112\057\067\345\314\167\067\123\044\222\105\215\073\160\254"
	"\310\020\071\074\255\314\067\257\053\034\007\372\051\326\133\262"
	"\201\040\341\114\046\027\343\217\067\111\005\202\054\001\375\306"
	"\120\223\340\027\021\377\204\257\317\113\047\242\152\056\323\061"
	"\061\035\364\361\070\017\356\041\172\234\044\100\252\046\061\314"
	"\020\331\177\275\361\226\172\250\211\312\120\272\041\043\076\244"
	"\254\354\247\053\024\207\351\265\360\026\164\350\065\330\370\014"
	"\131\304\300\374\332\206\232\072\240\331\301\063\044\070\013\224"
	"\152\127\155\152\001\331\053\151\343\323\211\351\206\057\216\171"
	"\030\320\167\375\370\161\364\006\236\352\204\204\313\211\302\303"
	"\041\316\144\113\223\122\327\251\032\172\132\316\170\145\121\320"
	"\231\275\372\164\015\140\226\160\127\014\230\004\071\167\013\363"
	"\165\277\022\326\003\251\310\054\365\017\001\351\067\046\222\272"
	"\127\363\061\337\137\026\033\205\165\276\303\011\206\230\045\040"
	"\071\174\235\332\022\276\143\131\001\155\223\072\267\005\354\077"
	"\204\023\321\027\235\223\271\202\324\321\015\137\065\267\162\246"
	"\311\243\252\357\331\324\113\161\374\210\377\123\251\334\225\276"
	"\004\233\337\147\332\161\324\072\256\066\363\321\070\367\323\150"
	"\350\367\252\272\235\353\025\243\062\206\170\355\267\146\257\115"
	"\201\221\111\104\277\324\207\251\304\076\141\310\275\106\162\304"
	"\203\223\036\106\061\207\302\203\103\134\051\335\145\272\004\047"
	"\102\057\262\260\030\047\022\153\330\115\316\330\313\233\135\326"
	"\332\141\045\075\350\361\216\360\017\116\242\341\112\317\371\312"
	"\326\155\076\355\105\274\217\152\000\264\216\101\242\046\074\130"
	"\153\022\256\377\130\063\034\172\220\125\041\266\266\000\144\003"
	"\146\321\307\153\372\130\343\375\345\256\374\250\127\115\340\021"
	"\357\136\111\321\021\164\065\276\303\071\023\055\054\216\314\336"
	"\255\152\045\364\213\174\270\012\072\020\273\324\303\343\230\066"
	"\217\047\170\036\271\002\046\251\074\146\130\177\155\323\344\224"
	"\001\001\063\066\177\137\322\007\157\330\273\222\307\110\007\047"
	"\077\327\134\117\373\237\155\276\220\166\161\231\246\330\260\033"
	"\050\337\257\213\142\266\071\236\055\346\230\024\254\322\161\255"
	"\033\103\350\362\107\364\240\161\200\157\107\026\173\157\317\223"
	"\212\045\175\350\315\030\044\304\223\310\232\307\342\036\301\371"
	"\036\356\262\113\266\270\356\230\330\346\030\162\160\233\333\064"
	"\100\230\274\216\226\021\155\054\152\250\057\231\353\101\337\344"
	"\310\130\232\104\002\164\077\321\222\242\217\031\017\374\240\120"
	"\303\376\125\031\320\046\025\273\005\117\300\260\357\213\146\225"
	"\061\134\175\302\117\377\132\000\316\041\174\347\247\160\066\141"
	"\163\206\036\072\033\277\064\245\356\165\173\172\265\333\301\302"
	"\305\127\264\352\166\155\353\341\353\114\002\047\025\316\157\023"
	"\373\274\206\122\362\213\105\005\066\307\103\313\013\330\213\350"
	"\333\001\160\111\123\220\334\017\365\333\360\304\125\365\204\275"
	"\274\115\316\315\161\310\212\231\144\334\344\054\032\154\365\013"
	"\364\307\134\034\310\021\173\004\010\344\131\042\351\163\107\342"
	"\306\106\371\275\217\226\221\337\227\377\312\157\063\055\137\336"
	"\211\310\036\047\336\002\334\134\372\233\226\110\172\037\013\121"
	"\072\323\050\131\207\263\213\113\015\216\253\213\167\012\047\346"
	"\006\201\376\305\025\212\016\361\276\344\036\241\125\004\342\105"
	"\270\177\302\334\310\300\352\104\343\227\342\076\155\121\245\064"
	"\021\200\034\213\226\116\131\066\154\250\343\107\301\314\064\240"
	"\172\305\152\256\362\256\275\256\056\364\261\262\143\135\147\356"
	"\147\306\332\265\247\044\243\035\122\175\032\331\237\344\074\027"
	"\322\206\216\336\244\226\361\236\204\147\362\214\213\366\102\355"
	"\004\260\170\017\336\013\370\364\202\246\003\326\332\335\115\217"
	"\122\323\201\054\064\264\266\164\046\177\235\372\200\007\043\372"
	"\037\321\030\335\051\234\005\165\274\121\367\175\130\120\313\125"
	"\164\201\357\333\222\363\046\103\307\264\222\370\035\370\012\013"
	"\373\014\132\114\037\241\160\374\143\257\205\255\250\272\327\002"
	"\345\056\141\027\355\032\077\243\176\157\207\011\311\204\101\052"
	"\307\004\141\105\140\146\246\354\013\321\171\231\265\106\114\324"
	"\143\102\221\344\161\051\233\024\376\114\270\366\333\013\131\211"
	"\371\101\255\303\244\165\040\021\232\025\133\260\061\167\344\134"
	"\151\020\162\036\163\171\326\240\155\236\033\202\345\072\343\246"
	"\260\255\317\330\036\275\135\274\141\017\343\041\102\267\051\114"
	"\353\072\201\302\371\251\216\005\020\161\357\272\064\211\263\107"
	"\254\013\072\066\310\227\362\052\246\325\114\351\215\165\065\171"
	"\260\267\073\251\140\311\257\161\073\237\054\157\050\337\266\324"
	"\352\360\012\263\210\375\335\057\322\052\030\140\237\115\331\120"
	"\004\024\372\145\336\251\326\031\110\002\210\160\342\077\105\315"
	"\060\120\200\270\115\136\347\040\210\377\200\050\115\132"
#define      chk2_z	19
#define      chk2	((&data[2617]))
	"\163\043\233\067\347\350\101\064\332\022\331\335\175\334\031\365"
	"\115\136\311\120\267\114"
#define      date_z	1
#define      date	((&data[2638]))
	"\336"
#define      xecc_z	15
#define      xecc	((&data[2641]))
	"\325\163\103\136\045\374\150\252\167\226\301\133\161\123\334\157"
	"\022\055\033\100"
#define      lsto_z	1
#define      lsto	((&data[2659]))
	"\116"
#define      shll_z	10
#define      shll	((&data[2662]))
	"\375\332\354\124\274\350\142\000\205\274\245\054"
#define      inlo_z	3
#define      inlo	((&data[2672]))
	"\352\155\330"/* End of data[] */;
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
