#include<stdio.h>
int main() 
{
    double c, f;
    scanf("%lf", &f);
    c = 5*(f-32)/9;
    printf("%.3lf\n", c);
    return 0;
}