#include<stdio.h>
#include<math.h>
#define METHOD 0
int main()
{
#if METHOD 
    for(int a=1; a<=9; a++)
        for(int b=0; b<=9; b++) {
            int t = a*1100+b*11;
            int m = floor(sqrt(t)+0.5);
            // double sqr_d = sqrt(t);
            // int sqr_i = floor(sqr_d+0.5);
            // if(sqr_d == sqr_i)
            if(m*m == t)
                printf("%d\n", t);
        }
#else
    for(int x=1; ; x++) {
        int n = x*x;
        if(n < 1000) continue;
        if(n > 9999) break;
        int hi = n/100;
        int lo = n%100;
        if(hi/10 == hi%10 && lo/10 == lo%10) printf("%d\n", n);
    }
#endif
    return 0;
}