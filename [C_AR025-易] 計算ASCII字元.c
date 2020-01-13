#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i, j, cnt[1000] = {0}, wcnt = 0;
    char a[1000], in, tmp;

    scanf("%c", &a[0]);
    cnt[0]++;
    wcnt++;

    while(scanf("%c", &in) != EOF){
        if(in == '\n')break;

        for(i = 0; i < wcnt; i++){
            if(a[i] == in){
                cnt[i]++;
                //printf("%c = %d\n", in, cnt[i]);
                break;
            }
        }

        if(i == wcnt){
            a[wcnt] = in;
            cnt[i]++;
            wcnt++;
        }
    }


    for(i = 0; i < wcnt; i++){
        for(j = 0; j < wcnt - i - 1; j++){
            if(a[j] < a[j+1]){
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;

                tmp = cnt[j];
                cnt[j] = cnt[j+1];
                cnt[j+1] = tmp;
            }
        }
    }

    for(i = 0; i < wcnt; i++){
        printf("%d %d\n", a[i], cnt[i]);
    }
}
