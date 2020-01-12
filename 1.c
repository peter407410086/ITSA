#include<stdio.h>

int main()
{
    int i, j, input[5], line = 0;
    char ans[5][100];
    for(i = 0; i < 5; i++){
        for(j = 0; j < 100; j++){
            ans[i][j] = ' ';
        }
    }
    scanf("%d", &input[0]);
    input[3] = input[0] % 10;
    input[0] /= 10;
    input[2] = input[0] % 10;
    input[0] /= 10;
    input[1] = input[0] % 10;
    input[0] /= 10;
    for(i = 0; i < 4; i++){
        if(input[i] == 1){
            line++;
            line++;
            line++;
            line++;
            ans[0][line] = '*';
            ans[1][line] = '*';
            ans[2][line] = '*';
            ans[3][line] = '*';
            ans[4][line] = '*';
            line++;
            line++;
        }
        else if(input[i] == 2){
            ans[0][line] = '*';
            ans[2][line] = '*';
            ans[3][line] = '*';
            ans[4][line] = '*';
            line++;
            ans[0][line] = '*';
            ans[2][line] = '*';
            ans[4][line] = '*';
            line++;
            ans[0][line] = '*';
            ans[2][line] = '*';
            ans[4][line] = '*';
            line++;
            ans[0][line] = '*';
            ans[2][line] = '*';
            ans[4][line] = '*';
            line++;
            ans[0][line] = '*';
            ans[1][line] = '*';
            ans[2][line] = '*';
            ans[4][line] = '*';
            line++;
            line++;
        }
            else if(input[i] == 3){
            ans[0][line] = '*';
            ans[2][line] = '*';
            ans[4][line] = '*';
            line++;
            ans[0][line] = '*';
            ans[2][line] = '*';
            ans[4][line] = '*';
            line++;
            ans[0][line] = '*';
            ans[2][line] = '*';
            ans[4][line] = '*';
            line++;
            ans[0][line] = '*';
            ans[2][line] = '*';
            ans[4][line] = '*';
            line++;
            ans[0][line] = '*';
            ans[1][line] = '*';
            ans[2][line] = '*';
            ans[3][line] = '*';
            ans[4][line] = '*';
            line++;
            line++;
        }
        else if(input[i] == 4){
            ans[0][line] = '*';
            ans[1][line] = '*';
            ans[2][line] = '*';
            line++;
            ans[2][line] = '*';
            line++;
            ans[2][line] = '*';
            line++;
            ans[2][line] = '*';
            line++;
            ans[0][line] = '*';
            ans[1][line] = '*';
            ans[2][line] = '*';
            ans[3][line] = '*';
            ans[4][line] = '*';
            line++;
            line++;
        }
        else if(input[i] == 5){/////////
            ans[0][line] = '*';
            ans[1][line] = '*';
            ans[2][line] = '*';
            ans[4][line] = '*';
            line++;
            ans[0][line] = '*';
            ans[2][line] = '*';
            ans[4][line] = '*';
            line++;
            ans[0][line] = '*';
            ans[2][line] = '*';
            ans[4][line] = '*';
            line++;
            ans[0][line] = '*';
            ans[2][line] = '*';
            ans[4][line] = '*';
            line++;
            ans[0][line] = '*';
            ans[2][line] = '*';
            ans[3][line] = '*';
            ans[4][line] = '*';
            line++;
            line++;
        }
        else if(input[i] == 6){
            ans[0][line] = '*';
            ans[1][line] = '*';
            ans[2][line] = '*';
            ans[3][line] = '*';
            ans[4][line] = '*';
            line++;
            ans[0][line] = '*';
            ans[2][line] = '*';
            ans[4][line] = '*';
            line++;
            ans[0][line] = '*';
            ans[2][line] = '*';
            ans[4][line] = '*';
            line++;
            ans[0][line] = '*';
            ans[2][line] = '*';
            ans[4][line] = '*';
            line++;
            ans[0][line] = '*';
            ans[2][line] = '*';
            ans[3][line] = '*';
            ans[4][line] = '*';
            line++;
            line++;
        }
        else if(input[i] == 7){
            ans[0][line] = '*';
            line++;
            ans[0][line] = '*';
            line++;
            ans[0][line] = '*';
            line++;
            ans[0][line] = '*';
            line++;
            ans[0][line] = '*';
            ans[1][line] = '*';
            ans[2][line] = '*';
            ans[3][line] = '*';
            ans[4][line] = '*';
            line++;
            line++;
        }
        else if(input[i] == 8){
            ans[0][line] = '*';
            ans[1][line] = '*';
            ans[2][line] = '*';
            ans[3][line] = '*';
            ans[4][line] = '*';
            line++;
            ans[0][line] = '*';
            ans[2][line] = '*';
            ans[4][line] = '*';
            line++;
            ans[0][line] = '*';
            ans[2][line] = '*';
            ans[4][line] = '*';
            line++;
            ans[0][line] = '*';
            ans[2][line] = '*';
            ans[4][line] = '*';
            line++;
            ans[0][line] = '*';
            ans[1][line] = '*';
            ans[2][line] = '*';
            ans[3][line] = '*';
            ans[4][line] = '*';
            line++;
            line++;
        }
        else if(input[i] == 9){
            ans[0][line] = '*';
            ans[1][line] = '*';
            ans[2][line] = '*';
            ans[4][line] = '*';
            line++;
            ans[0][line] = '*';
            ans[2][line] = '*';
            ans[4][line] = '*';
            line++;
            ans[0][line] = '*';
            ans[2][line] = '*';
            ans[4][line] = '*';
            line++;
            ans[0][line] = '*';
            ans[2][line] = '*';
            ans[4][line] = '*';
            line++;
            ans[0][line] = '*';
            ans[1][line] = '*';
            ans[2][line] = '*';
            ans[3][line] = '*';
            ans[4][line] = '*';
            line++;
            line++;
        }
        else if(input[i] == 0){
            ans[0][line] = '*';
            ans[1][line] = '*';
            ans[2][line] = '*';
            ans[3][line] = '*';
            ans[4][line] = '*';
            line++;
            ans[0][line] = '*';
            ans[4][line] = '*';
            line++;
            ans[0][line] = '*';
            ans[4][line] = '*';
            line++;
            ans[0][line] = '*';
            ans[4][line] = '*';
            line++;
            ans[0][line] = '*';
            ans[1][line] = '*';
            ans[2][line] = '*';
            ans[3][line] = '*';
            ans[4][line] = '*';
            line++;
            line++;
        }
    }
    line--;
    for(i = 0; i < 5; i++){
        for(j = 0;j < line; j++){
            printf("%c", ans[i][j]);
        }
        printf("\n");
    }
}
