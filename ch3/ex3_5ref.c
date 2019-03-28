#include <stdio.h>
#include <string.h>
char a[1001];
char s[5][5];
int main() {
    int key=0;
    
    while (gets(s[0])) {
        if (s[0][0]=='Z'){
            return 0;
        }
        int x=0,y=0;
        for (int i=1; i<5; i++)
            gets(s[i]);
        for (int i = 0;i < 5;i++)
            for (int j = 0;j < 5;j++)
                if (s[i][j] == ' ') {
                    x = i;y = j;
                }
        
        int k=0;
        while ((a[k]=getchar())!='0') {
            if (a[k]=='0')
                break;
            if (a[k]=='\n')k--;
            k++;
        }
        getchar();
        if (key ++) printf("\n");
        printf("Puzzle #%d:\n",key);
        int flag=0;
        for (int i = 0;a[i]!='0';i++) {
            switch (a[i])
            {
                case 'A':
                    if (s[x-1][y]) {
                        s[x][y] = s[x - 1][y];
                        s[x -= 1][y] = ' ';
                    }
                    else
                        flag = 1;
                    break;
                case 'B':
                    if (s[x+1][y]) {
                        s[x][y] = s[x + 1][y];
                        s[x += 1][y] = ' ';
                    }
                    else
                        flag = 1;
                    break;
                case 'R':
                    if (s[x][y + 1] && y +1 < 5) {
                        s[x][y] = s[x][y + 1];
                        s[x][y += 1] = ' ';
                    }
                    else
                        flag = 1;
                    break;
                case 'L':
                    if (s[x][y - 1]&& y - 1 >= 0) {
                        s[x][y] = s[x][y - 1];
                        s[x][y -= 1] = ' ';
                    }
                    else
                        flag = 1;
                    break;
                default:
                    flag = 1;
                    break;
            }
        }
        if (flag != 1)
            for (int i = 0;i < 5;i++){
                for (int j = 0;j < 5;j++) {
                    if (j == 0)printf("%c", s[i][j]);
                    else printf(" %c", s[i][j]);
                }
                printf("\n");
            }
        else printf("This puzzle has no final configuration.\n");
    }
    
    return 0;
    
}