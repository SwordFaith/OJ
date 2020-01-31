#include<stdio.h>
#include<string.h>
enum{maxn=10};
int a[maxn][maxn];
int main()
{
    int n, row, col, tot;
    scanf("%d", &n);
    tot=a[row=0][col=n-1]=1; // unify ++row, to avoid row=-1 hazard
    while(tot<n*n){
        while(row+1<n && !a[row+1][col]) a[++row][col] = ++tot;
        while(col-1>=0 && !a[row][col-1]) a[row][--col] = ++tot;
        while(row-1>=0 && !a[row-1][col]) a[--row][col] = ++tot;
        while(col+1<n && !a[row][col+1]) a[row][++col] = ++tot;
    }
    for(row=0; row<n; row++){
        for(col=0; col<n; col++) printf("%3d", a[row][col]);
        printf("\n");
    }
    return 0;
}