#include<stdio.h>
#include<string.h>
enum { maxm = 105, maxn = 1005 };
char s[maxm][maxn];
char ans[maxn];
char stat[4]; // A, C, G, T (0~3)
char sel_ch() {
    int max = 0;
    for(int i = 1; i < 4; i++)
        if (stat[i] > stat[max]) max = i;
    switch (max) {
        case 0: return 'A'; 
        case 1: return 'C';
        case 2: return 'G';
        case 3: return 'T'; 
        default: break;
    }
    return '\0';
}
int main() {
    int kase = 0; scanf("%d", &kase);
    while(kase--) {
        int m, n;
        scanf("%d%d", &m, &n);
        fgets(s[0], maxn, stdin);
        for (int i = 0; i < m; i++) {
            fgets(s[i], maxn, stdin);
        }
        for(int j = 0; j < n; j++) {
            memset(stat, 0, sizeof(stat));
            for (int i = 0; i < m; i++) {
                switch (s[i][j]) {
                    case 'A': stat[0]++; break;
                    case 'C': stat[1]++; break;
                    case 'G': stat[2]++; break;
                    case 'T': stat[3]++; break;
                    default: break;
                }
            }
            ans[j] = sel_ch(); 
        }
        ans[n] = '\0';
        int dist = 0;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++) {
                if (s[i][j] != ans[j]) dist++;
            }
        printf("%s\n%d\n", ans, dist);
    }
}