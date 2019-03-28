#include<stdio.h>
#define TLE 0
#if TLE
int main() {
    unsigned int n = 0;
    scanf("%d", &n);
    while(n > 0) {
        unsigned int a;
        scanf("%d", &a); 
        int m = 0;
        for(m=0; m<a; m++) {
            int x = m, y = m;
            while(x>0) { y += x%10; x /= 10; }
            if(y == a)  break;
        }
        if(m == a) printf("0\n");
        else printf("%d\n", m);
        n--;
    }
}
#else
//#include<string.h>
enum{ maxn = 100005 };
int ans[maxn] = {0};
int main() {
    int T, n;
    for(int m = 1; m < maxn; m++) {
        int x = m, y = m;
        while(x > 0) { y += x % 10; x /= 10; }
        if(ans[y] == 0) ans[y] = m;
    } 
    scanf("%d", &T);
    while(T--) {
        scanf("%d", &n);
        printf("%d\n", ans[n]);
    }
    return 0;
}
#endif