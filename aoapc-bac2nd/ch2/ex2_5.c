#include<stdio.h>
int main()
{
    int a, b, c, kase=0;
    while(3 == scanf("%d%d%d", &a, &b, &c)){
        if(0==a && 0==b && 0==c) break;
        int res = a%b;
        printf("Case %d: %d.", ++kase, a/b);
        for(int i=0; i<c-1; ++i){
            res *= 10;
            printf("%d", res/b);
            res %= b;
        }
        res *= 10;
        int la = ((res%b)*10)/b;
        res /= b;
        if(la>=5) printf("%d\n", res+1);
        else printf("%d\n", res);
    }
    return 0;
}