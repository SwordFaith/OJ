#include<stdio.h>
int main()
{
    int n, m, kase=0;
    while(scanf("%d%d", &n, &m) == 2){
        double s=0;
        for(int i=n; i<=m; i++){
            double di = (double)i;
            s += 1.0/(di*di);
        }
        printf("Case %d: %.5f\n", ++kase, s);
    }
    return 0;
}