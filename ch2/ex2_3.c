#include<stdio.h>
int main()
{
    int n, line=0;
    scanf("%d", &n);
    for(;n>0; --n, ++line){
        for(int i=0; i<line; ++i)
            printf(" ");
        for(int i=1; i<2*n; ++i)
            printf("#");
        printf("\n");
    }
    return 0;
}