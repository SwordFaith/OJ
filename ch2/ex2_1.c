#include<stdio.h>
int main()
{
    int a, b, c;
    for(int n=100; n<1000; ++n){
        int a=n/100;
        int b=n/10%10;
        int c=n%10;
        int total=a*a*a + b*b*b + c*c*c;
        if(total == n) printf("%d\n", n);
    }
    return 0;
}