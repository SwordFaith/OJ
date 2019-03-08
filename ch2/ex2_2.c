#include<stdio.h>
int main()
{
    int a, b, c, kase=0;
    while(scanf("%d", &a) == 1
        && scanf("%d", &b) == 1
        && scanf("%d", &c) == 1){
        int n=10;
        for(; n<=100; ++n){
            if(n%3 == a &&
               n%5 == b &&
               n%7 == c){
                break;
            }
        }
        if(n>100) printf("Case %d: No answer\n", ++kase);
        else printf("Case %d: %d\n", ++kase, n);
    }
    return 0;
}