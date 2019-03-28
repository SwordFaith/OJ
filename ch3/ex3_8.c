#include<stdio.h>
#include<string.h>
#include<math.h>
enum { maxn = 3005 };
const char s[] = " = number of digits in repeating cycle\n";
// quo is the decimal fraction
// rem is a log to trace if one remanent occured
int quo[maxn], rem[maxn]; 
int main() {
    int a, b, kase = 0; 
    while(scanf("%d%d", &a, &b) == 2) {
        memset(quo, 0, sizeof(quo));
        memset(rem, 0, sizeof(rem));
        int cnt = 1, itrem = a%b;
        // itrem != 0 means have not achieve exact division
        // rem[itrem] == 0 means have not encounter a loop segment
        while(itrem != 0 && rem[itrem] == 0) {
            rem[itrem] = cnt;
            int divd = itrem * 10;
            quo[cnt++] = divd / b;
            itrem = divd % b;
        }
        //if (kase++) putchar('\n');
        printf("%d/%d = %d.", a, b, a/b);
        if (itrem != 0) { // has loop segment
            for (int i = 1; i < rem[itrem]; i++) {
                printf("%d", quo[i]);
            }
            putchar('(');
            int i = rem[itrem], itcnt = 50;
            for (; i < cnt && itcnt > 0; i++, itcnt--) {
                printf("%d", quo[i]);
            }
            if (itcnt == 0 && i < cnt) printf("...");
        } else {
            for (int i = 1; i < cnt; i++) {
                printf("%d", quo[i]);
            }
            printf("(0");
        }
        printf(")\n   %d%s\n", itrem == 0 ? 1 : cnt - rem[itrem], s);
    }
    return 0;
}