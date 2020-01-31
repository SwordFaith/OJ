#include<stdio.h>
int main()
{
    int n, m; // n total body amount, m total leg amount
    scanf("%d%d", &n, &m);
    int chk, rbt; //chk for chicken, rbt for rabbit
    chk = (4*n-m)/2;
    rbt = n-chk;
    if(m % 2 == 1 || chk<0 || rbt<0)
        printf("No answer\n");
    else
        printf("%d %d\n", chk, rbt);
    return 0;
}