#include<stdio.h>
#include<string.h>

int main()
{
    int i, j, cnt = 0, a, b;
    char ans[10], in[10];

    scanf("%s", ans);

    while(scanf("%s", in) != EOF){
        if(strcmp(in, "0000") == 0)break;
        a = 0;
        b = 0;
        for(i = 0; i < 4; i++){
            for(j = 0; j < 4; j++){
                if(ans[i] == in[j]){
                    if(i == j)
                        a++;
                    else
                        b++;
                }
            }
        }

        printf("%dA%dB\n", a, b);
    }


}
