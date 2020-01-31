#include<stdio.h>
#include<math.h>
int main()
{
    double sum = 0;
    for(int i=1; ; i++) {
        double term = 1.0/(2*i-1);
        if(term < 1e-6) break;
        // sum += pow(-1, i+1)*term;
        sum = i%2==1 ? sum +term : sum-term;
    }
    printf("%.6lf\n", sum);
    return 0;
}