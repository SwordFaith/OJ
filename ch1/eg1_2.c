#include<stdio.h>
#define ZERO_DISP 0
int main()
{
    int n, m;
    scanf("%d", &n);
#if ZERO_DISP
    printf("%d%d%d\n", n%10, n/10%10, n/100);
#else
    m = (n%10)*100 + (n/10%10)*10 + (n/100);
    printf("%d\n", m); // if use this way can disp 0 by printf("%03d\n", m)
#endif
    return 0;
}