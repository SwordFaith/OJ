#include<stdio.h>
#include<string.h>
enum { maxn = 85 };
int iskstep(const char *s, int k) {
    int n = strlen(s)/k;
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < k; j++) {
            if(s[i*k+j] != s[(i+1)*k+j])
                return 0;
        }
    }
    return 1;
}
int main() {
    int T; scanf("%d", &T);
    while(T--) {
        char s[maxn] = {0};
        scanf("%s", s);
        int len = strlen(s);
        int k = 1;
        for(; k <= len; k++) {
            if(len % k != 0) continue;
            if(iskstep(s, k)) break;
        }
        printf("%d", k);
        if(T > 0) printf("\n\n");
        else printf("\n");
    }
    return 0;
}