#include<stdio.h>
#include<string.h>
#include<stdlib.h>
enum { maxn = 12 }; // got WA at maxn == 11
// gets() not read '\n' and replace '\n' by '\0'
// fgets() read '\n' and add '\0' at the end
char s[maxn][maxn];
int mark[maxn][maxn];
int main() {
    int r, c, kase = 0;;
    while(scanf("%d", &r) == 1 && r != 0) {
        scanf("%d", &c);
        fgets(s[0], maxn, stdin);
        for (int i = 0; i < r; i++) 
            fgets(s[i], maxn, stdin);
        int cnt = 0;
        for (int i = 0; i < r; i++) // calc mark
            for(int j = 0; j < c; j++) {
                if (s[i][j] == '*') mark[i][j] = -1;
                else if (i == 0 || j == 0 || 
                        s[i][j-1] == '*' || 
                        s[i-1][j] == '*') mark[i][j] = ++cnt;
                else mark[i][j] = 0;
            }
        if(kase) printf("\n");
        printf("puzzle #%d:\nAcross", ++kase);
        for (int i = 0; i < r; i++) { 
            int st_flg = 1;
            for (int j = 0; j < c; j++) {
                if (s[i][j] == '*') {
                    st_flg = 1; continue;
                } else {
                    if (st_flg) {
                        st_flg = 0;
                        printf("\n%3d.%c", mark[i][j], s[i][j]);
                    } else { printf("%c", s[i][j]); }
                }
            }
        }
        printf("\nDown");
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (s[i][j] == '*') { continue; } 
                else {
                    if (i == 0 || s[i-1][j] == '*') {
                        printf("\n%3d.%c", mark[i][j], s[i][j]);
                        for (int k = i+1; k < r; k++) {
                            if (s[k][j] == '*') break;
                            else printf("%c", s[k][j]);
                        }
                    } else { continue; }
                }
            }
        }
        printf("\n");
    }
    return 0;
}