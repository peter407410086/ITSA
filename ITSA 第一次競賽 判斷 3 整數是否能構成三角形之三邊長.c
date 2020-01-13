#include<stdio.h>

int main()
{
    int i, a[3], j, tmp;
    while(scanf("%d %d %d", &a[0], &a[1], &a[2]) != EOF){
        for(i = 0; i < 2; i++){
            for(j = 0; j < 2; j++){
                if(a[j] > a[j+1]){
                    tmp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = tmp;
                }
            }
        }

        if(a[0] + a[1] > a[2]){
            printf("fit\n");
        }
        else{
            printf("unfit\n");
        }
    }

}
