#include<stdio.h>
#include<string.h>
enum { maxn = 10005 };
int main() {
    int T; scanf("%d", &T);
    while(T--) {
        int N; scanf("%d", &N);
        int st[10] = {0};
        for(int i = 1; i <= N; i++) {
            int x = i;
            while(x > 0) { st[x%10]++; x /= 10; }
        }
        for(int i = 0; i < 9; i++) {
            printf("%d ", st[i]);
        }
        printf("%d\n", st[9]);
    }
    return 0;
}