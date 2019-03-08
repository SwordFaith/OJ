#include<stdio.h>
int main()
{
    const int INF=1E9;
    int x, n=0, min=INF, max=-INF; 
    double s=0;
    while(scanf("%d", &x) == 1){
        s += x;
        if(x<min) min = x;
        if(x>max) max = x;
        n++;
    }
    printf("%d %d %.3f\n", min, max, s/n);
    return 0;
}