#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//#define LOCAL
enum { maxn = 6 };
typedef struct Rect { int w, h; }Rect;
//int wa[maxn], ha[maxn];
Rect ra[maxn];
//int pcnt[maxn], pw[maxn];
int cmp(const void *a, const void *b) { 
    return ((Rect *)a)->w == ((Rect *)b)->w ? ((Rect *)a)->h - ((Rect *)b)->h 
            : ((Rect *)a)->w - ((Rect *)b)->w; 
}
int main() {
#ifdef LOCAL
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
#endif
    int w, h;
    while (scanf("%d %d", &w, &h) != EOF) {
        if (w < h) { ra[0].w = w; ra[0].h = h; }
        else { ra[0].w = h; ra[0].h = w; }
        for (int i = 1; i < 6; i++) {
            scanf("%d %d", &w, &h);
            if (w < h) { ra[i].w = w; ra[i].h = h; }
            else { ra[i].w = h; ra[i].h = w; }
        }
        qsort(ra, maxn, sizeof(Rect), cmp);
        int pflg = 1, mflg = 1; 
        // pair of pallet
        if (memcmp(ra, ra+1, sizeof(Rect)) || memcmp(ra+2, ra+3, sizeof(Rect)) || memcmp(ra+4, ra+5, sizeof(Rect))) pflg = 0;
        // match sides
        if (ra[0].w != ra[2].w || ra[0].h != ra[4].w || ra[2].h != ra[4].h) mflg = 0;
        if (pflg == 1 && mflg == 1) printf("POSSIBLE\n");
        else printf("IMPOSSIBLE\n");
    }
    return 0;
}