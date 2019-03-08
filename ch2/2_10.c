#define LOCAL
#include<stdio.h>
int main()
{
#ifdef LOCAL
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
#endif
    const int INF=1E9;
    int x, n=0, min=INF, max=-INF; 
    double s=0;
    while(scanf("%d", &x) == 1){
        s += x;
        if(x<min) min = x;
        if(x>max) max = x;
    /*
        printf("%d %d %d\n", x, min, max);
    */
        n++;
    }
    printf("%d %d %.3f\n", min, max, s/n);
    return 0;
}