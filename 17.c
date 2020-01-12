#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i = 0, j, cnt = 0, flag = 0;
    char input[1005], *ptr = NULL;
    char ans[1000][100], tmp[1000];

    fgets(input, 1001, stdin);
    ptr = input;
    while(*ptr != '\0'){
        if(isspace(*ptr) && *ptr != '\0'){
            ptr++;
        }
        else{
            i = 0;
            while(!isspace(*ptr) && *ptr != '\0')
            {
                tmp[i] = tolower(*ptr);
                ptr++;
                i++;
            }
            tmp[i]='\0';

            for(j = 0, flag = 0; j < cnt; j++){
                if(strcmp(tmp, ans[j]) == 0){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                strcpy(ans[cnt], tmp);
                cnt++;
            }
        }
    }
    for(i = 0; i < cnt; i ++){
        printf("%s", ans[i]);
        if(i != cnt-1)printf(" ");
    }
    printf("\n");
}
