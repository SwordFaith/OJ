#include<stdio.h>
#include<string.h>
//#define LOCAL
enum { maxn = 105 };
int min(int a, int b) { return a < b ? a : b; }
int minLen(const char *m, const char *d) {
    int mlen = strlen(m), dlen = strlen(d), i, j;
    for (i = 0; i < mlen; i++) {
        int inlen = min(mlen-i, dlen);
        for (j = 0; j < inlen; j++) {
            if (m[i+j] == '2' && d[j] == '2') { break; }
        }
        if (j == inlen) { return mlen + dlen - inlen; } 
    }
    return mlen + dlen;
}
int main() {
#ifdef LOCAL
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
#endif
    char m[maxn], d[maxn];
    while(scanf("%s%s", m, d) == 2) {
        printf("%d\n", min(minLen(m, d), minLen(d, m) ) );
    }
    return 0;
}