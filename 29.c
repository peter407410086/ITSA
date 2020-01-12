#include<stdio.h>
#include<string.h>

int main()
{
    int i, j, tmp, alpha[26];

    for(i = 0; i < 8; i++)//A to H
        alpha[i] = i + 10;

    alpha[8] = 34;//I

    for(i = 9; i < 14; i++)//J to N
        alpha[i] = i + 9;

    alpha[14] = 35;//O

    for(i = 15; i < 22; i++)//P to V
        alpha[i] = i + 8;

    alpha[22] = 32;//W
    for(i = 23; i < 25; i++)//X to Y
        alpha[i] = i + 7;

    alpha[25] = 33;//Z


    char in[20];
    int right, cnt = 8;

    while(scanf("%s", in) != EOF){
        right = alpha[in[0] - 'A'] / 10 + 9 * (alpha[in[0] - 'A'] % 10);

        for(i = 1; i < strlen(in); i++){
            right += (in[i] - '0') * cnt;
            if(cnt > 1)cnt--;
        }

        if(right % 10 == 0)
            printf("CORRECT!!!\n");
        else
            printf("WRONG!!!\n");
    }
}
