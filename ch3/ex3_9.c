#include<stdio.h>
#include<string.h>
//#define LOCAL
enum { maxn = 100005 };
int main() {
#ifdef LOCAL
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
#endif
    char s[maxn], t[maxn];
    while (scanf("%s %s", s, t) != EOF) {
        size_t slen = strlen(s), tlen = strlen(t);
        int i = 0, j = 0;
        while (i < slen && j < tlen) {
            if(t[j] == s[i]) { i++, j++; ; }
            else { j++; }
        }
        if (i == slen) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}