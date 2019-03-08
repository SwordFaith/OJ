#include<stdio.h>
int main()
{
    int n2, cnt=0;
    scanf("%d", &n2);
    // avoid scanf long long use "%lld/%i64d" on different platform
    long long n = n2; 
    do{
        if(n%2 == 1) n = 3*n+1;
        else n /= 2;
        cnt++;
    }while(n>1);
    printf("%lld\n", cnt);
    return 0;
}