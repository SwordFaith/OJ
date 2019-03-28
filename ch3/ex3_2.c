#include<stdio.h>
#include<string.h>
#include<ctype.h>
enum { maxn = 85 };
int main() {
    const double smm[] = {1.008, 12.01, 14.01, 16.00};
    int T; scanf("%d", &T);
    while(T--) {
        char s[maxn];
        scanf("%s", s);
        int n = strlen(s);
        double mm = 0;
        for(int i = 0; i < n; ) {
            int x = 0, step = 1;
            double y = 0;
            if(i+1 < n && isdigit(s[i+1])) {
                x = s[i+step++] - '0'; 
                if(i+2 < n && isdigit(s[i+2])) {
                    x = x*10 + s[i+step++] - '0';
                }
            } else {
                x = 1;
            } 
            y = s[i] == 'H' ? smm[0] :
                s[i] == 'C' ? smm[1] :
                s[i] == 'N' ? smm[2] :
                s[i] == 'O' ? smm[3] : 0;
            mm += x*y;
            i += step;
        }
        printf("%.3lf\n", mm);
    }
    return 0;
}