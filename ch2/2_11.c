
#include<stdio.h>
int main()
{
    FILE *fin, *fout;
    fin = fopen("data.in", "rb");
    fout = fopen("data.out", "wb");
    const int INF=1E9;
    int x, n=0, min=INF, max=-INF; 
    double s=0;
    while(fscanf(fin, "%d", &x) == 1){
        s += x;
        if(x<min) min = x;
        if(x>max) max = x;
    /*
        printf("%d %d %d\n", x, min, max);
    */
        n++;
    }
    fprintf(fout, "%d %d %.3f\n", min, max, s/n);
    fclose(fin);
    fclose(fout);
    return 0;
}