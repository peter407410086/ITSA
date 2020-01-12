#include<stdio.h>
#include<string.h>

int main()
{
    int i, j, cnt = 0, tmp;
    int sum[10], in[15], ans[15];

    while(scanf("%d", &cnt) != EOF){
        for(i = 0; i < cnt; i++){
            scanf("%d", &in[i]);
            ans[i] = in[i];
            sum[i] = 0;

            sum[i] += in[i] % 10;
            in[i] /= 10;
            sum[i] += in[i] % 10;
            in[i] /= 10;
            sum[i] += in[i] % 10;
            in[i] /= 10;
            sum[i] += in[i];
            //printf("sum = %d\n", sum[i]);
        }


        for(i = 0; i < cnt; i++){
            for(j = 0; j < cnt - i - 1; j++){
                if(sum[j] > sum[j+1]){
                    tmp = sum[j];
                    sum[j] = sum[j+1];
                    sum[j+1] = tmp;

                    tmp = ans[j];
                    ans[j] = ans[j+1];
                    ans[j+1] = tmp;
                }
            }
        }

        for(i = 0; i < cnt; i++){
            for(j = 0; j < cnt - i - 1; j++){
                if(sum[j] == sum[j+1] && ans[j] > ans[j+1]){
                    tmp = sum[j];
                    sum[j] = sum[j+1];
                    sum[j+1] = tmp;

                    tmp = ans[j];
                    ans[j] = ans[j+1];
                    ans[j+1] = tmp;
                }
            }
        }

        for(i = 0; i < cnt; i++){
            printf("%d", ans[i]);
            if(i != cnt - 1)printf(" ");
        }
        printf("\n");
    }
}
