#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char a[3][3];
    int i, flag1 = 0, flag2 = 0;

    for(i = 0; i < 3; i++){
        scanf("%d%d%d", &a[i][0], &a[i][1], &a[i][2]);
    }

    for(i = 0; i < 3; i++){
        if(a[i][0] == 1 && a[i][1] == 1 && a[i][2] == 1)flag1 = 1;
        if(a[i][0] == 0 && a[i][1] == 0 && a[i][2] == 0)flag2 = 1;

        if(a[0][i] == 1 && a[1][i] == 1 && a[2][i] == 1)flag1 = 1;
        if(a[0][i] == 0 && a[1][i] == 0 && a[2][i] == 0)flag2 = 1;
    }
    if(a[0][0] == 1 && a[1][1] == 1 && a[2][2] == 1)flag1 = 1;// 1xx
    if(a[2][0] == 1 && a[1][1] == 1 && a[0][2] == 1)flag1 = 1;// x1x
    //                                                           xx1
    if(a[0][0] == 0 && a[1][1] == 0 && a[2][2] == 0)flag2 = 1;
    if(a[2][0] == 0 && a[1][1] == 0 && a[0][2] == 0)flag2 = 1;

    if(flag1 == 1 || flag2 == 1)printf("True\n");
    else{
        printf("False\n");
    }
}
