#include<stdio.h>
int main()
{
    const double p=95;
    int n;
    scanf("%d", &n);
    if (n*p>300)
        printf("%.2lf\n", n*p*0.8);
    else
        printf("%.2lf\n", n*p);
    return 0;
    
}