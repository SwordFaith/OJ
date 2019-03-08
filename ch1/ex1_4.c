#include<stdio.h>
#include<math.h>
int main()
{
    const double pi = acos(-1);
    int n;
    scanf("%d", &n);
    double rad = n/180.0 * pi;
    printf("sin(n): %lf, cos(n): %lf\n", 
            sin(rad), cos(rad));
    return 0; 
}