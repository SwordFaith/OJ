#include<stdio.h>
#include<string.h>
enum { maxn = 85 };
int main() {
    int T;
    scanf("%d", &T);
    while(T--) {
        char s[maxn];
        scanf("%s", s);
        int n = strlen(s), score = 0, o_cnt = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == 'O') score += ++o_cnt;
            else o_cnt = 0;
        } 
        printf("%d\n", score);
    }
   return 0;
}