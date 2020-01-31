#include<stdio.h>

void swap(int *a, int *b) {
    *a = *a+*b;
    *b = *a-*b;
    *a = *a-*b;
}

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a > b) {
        swap(&a, &b);
    }
    if (a > c) {
        swap(&a, &c);
    }
    if (b > c) {
        swap(&b, &c);
    }
    printf("%d %d %d", a, b, c);
    return 0;
}