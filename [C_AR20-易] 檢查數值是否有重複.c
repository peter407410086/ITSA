#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int a[200], i, j, cnt, flag = 0;

    scanf("%d", &cnt);

    for(i = 0; i < cnt; i++){
        scanf("%d", &a[i]);
    }

    for(i = 0; i < cnt; i++){
        for(j = 0; j < cnt; j++){
            if(i == j)continue;
            if(a[i] == a[j]){
                flag = 1;
                break;
            }
        }
        if(flag == 1)break;
    }

    if(flag == 1)
        printf("0\n");
    else if(flag == 0)
        printf("1\n");
}
