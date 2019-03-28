#include<stdio.h>
#include<string.h>
enum { maxn = 105 };
char s[maxn] = {0};
int main() {
    int T;
    scanf("%d", &T);
    while(T--) {
        memset(s, 0, sizeof(s));
        scanf("%s", s);
        size_t min = 0, len = strlen(s);
        for(size_t i = 1; i < len; i++) { 
            int count = 0;
            while(count < len) {
                if(s[(min+count)%len] == s[(i+count)%len]) {
                    count++; continue;
                } else {
                    if(s[(min+count)%len] > s[(i+count)%len]) min = i;
                    break;
                }
            }
        }
        for(int j = 0; j < len; j++) printf("%c", s[(min+j)%len]);
        printf("\n");
    }
    return 0;
}