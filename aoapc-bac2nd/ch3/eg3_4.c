#include<stdio.h>
#include<string.h>
#include<stdlib.h>
enum {maxN = 1010};
int main()
{
    int N, count=0;
    while(scanf("%d", &N) == 1 && N != 0) {
        printf("Game %d:\n", ++count);
        int s[maxN];
        for(int i=0; i<N; i++) scanf("%d", s+i);
        do{
            int q[maxN] = {0}, zcount = 0;
            for(int i=0; i<N; i++) {
                scanf("%d", q+i);
                if(q[i] == 0) zcount++;
            }
            if(zcount == N) break;
            int strong = 0, weak = 0, ms[maxN] = {0}, mw[maxN] = {0};
            for(int i=0; i<N; i++) 
                if(s[i] == q[i]) {
                    strong++;
                    ms[i] = 1;
                } 
            for(int i=0; i<N; i++) {
                if(ms[i]) continue;
                for(int j=0; j<N; j++) {
                    if(ms[j] || mw[j]) continue;
                    if(s[j] == q[i]) {
                        mw[j] = 1;
                        weak++;
                        break;
                    }
                }
            }
            printf("    (%d,%d)\n", strong, weak);
        }while(1);
    }
    return 0;
}