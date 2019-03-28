#include<sstream>
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
//#define LOCAL
enum { maxm = 12, maxe = 32, maxn = 1000 };
int main () {
#ifdef LOCAL
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
#endif
    long long elut[maxm][maxe]; 
    double mlut[maxm][maxe];
    for (int i = 0; i <= 9; ++i) {
        for (int j = 1; j <= 30; ++j) {
            double m = 1 - pow(2, -1-i), e = pow(2, j) - 1;
            double t = log10(m) + e * log10(2);
            elut[i][j] = t, mlut[i][j] = pow(10, t - elut[i][j]);
        }
    }
    char s[maxn];
    while(scanf("%s", s) != EOF && strcmp(s, "0e0")) {
        int len = strlen(s);
        for (int i = 0; i < len; i++) {
            if (s[i] == 'e') { s[i] = ' '; break; }
        }
        double m; long long e;        
        sscanf(s, "%lf %lld", &m, &e);
        if (m == 0 && e == 0) break;
        while (m < 1) { m *= 10; e -= 1; }
        //printf("%.15lf %d\n", m, e);
        for (int i = 0; i <= 9; ++i) {
            for (int j = 1; j <= 30; ++j) {
                if (e == elut[i][j] && fabs(m - mlut[i][j]) < 1e-4) {
                    printf("%d %d\n", i, j);
                    break;
                }
            }
        }
    }
    return 0;
}