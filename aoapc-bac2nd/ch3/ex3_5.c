#include<stdio.h>
#include<string.h>
#include<ctype.h>
enum { maxn = 5 };
char s[maxn][maxn] = {0};
const char bad[] = "This puzzle has no final configuration.\n";
int main() {
    int kase = 0, c;
    // use gets() to avoid \r \n \r\n differenct to getchar() behavior
    while(gets(s[0])){ 
        if(s[0][0] == 'Z') break;
        int row = -1, col = -1, err_flag = 0;
        for(int i = 1; i < 5; i++) gets(s[i]);
        for(int i = 0; i < 5; i++)
            for(int j = 0; j < 5; j++) {
                if(s[i][j] == ' ' || (j == 4 && !isalnum(s[i][j]) ) ) // || for robust
                    { row = i; col = j; }
            }
        while((c = getchar()) != '0'){
            //printf("%c: row=%d col=%d err_flag=%d\n", c, row, col, err_flag);
            switch (c) {
                case 'A':
                    if(row == 0 || err_flag == 1) { err_flag = 1; }
                    else { s[row][col] = s[row-1][col]; row--; }
                    break;
                case 'B':
                    if(row == 4 || err_flag == 1) { err_flag = 1; }
                    else { s[row][col] = s[row+1][col]; row++; }
                    break;
                case 'R':
                    if(col == 4 || err_flag == 1) { err_flag = 1; }
                    else { s[row][col] = s[row][col+1]; col++; }
                    break;
                case 'L':
                    if(col == 0 || err_flag == 1) { err_flag = 1; }
                    else { s[row][col] = s[row][col-1]; col--; }
                    break;
                default:
                    break;
            }
        }
        if(kase++) putchar('\n');
        printf("Puzzle #%d:\n", kase);
        if(err_flag) printf("%s", bad);
        else {
            s[row][col] = ' ';
            //printf("%s\n", s);
            for(int i = 0; i < maxn; i++)
                for(int j = 0; j < maxn; j++) {
                    putchar(s[i][j]);
                    if(j != maxn-1) putchar(' '); // should only print one ' '
                    else putchar('\n');
                }
        } 
        while((c = getchar()) != '\n');
    }
    
    return 0;
}