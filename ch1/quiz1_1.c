#include<stdio.h>
int main()
{
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    printf("%.3lf\n", (a+b+3)/3.0);
    return 0;
}