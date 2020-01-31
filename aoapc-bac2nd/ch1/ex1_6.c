#include<stdio.h>
void swap(int *a, int *b)
{
    *a = *a+*b;
    *b = *a-*b;
    *a = *a-*b;
}
void sort(int *a, int *b, int *c)
{
    if (*a > *b)
        swap(a, b);
    if (*a > *c)
        swap(a, c);
    if (*b > *c)
        swap(b, c);
}
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    sort(&a, &b, &c);
    if (a+b > c)
        if (a*a + b*b == c*c)
            printf("yes\n");
        else
            printf("no\n");
    else
        printf("not a triangle\n");
    return 0;
}