#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i = 0, j, cnt = 0, flag = 0;
    char a[1005], b[1005], *ptr = NULL, *qtr = NULL;
    char ans[1000][100], tmp[1000];

    scanf("%s", a);
    scanf("%s", b);
    int len1 = strlen(a);
    int len2 = strlen(b);

    for(j = 0; j < len2-len1+1; j++){
        if(strncmp(a, &b[j], len1) == 0){
            cnt++;
        }
    }

    printf("%d\n", cnt);
}
