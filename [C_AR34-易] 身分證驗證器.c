#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
    int i = 0, num = 0, sum = 0, tmp[10];
    char input[15];

    scanf("%s", &input);

    for(i = 0; i < 9; i++){
        tmp[i] = input[i+1] - 48;
        //printf("%d\n", tmp[i]);
    }

    for(i = 0; i < 11; i++){
        if(input[0] == 'I'){
            num = 34;
            break;
        }

        else if(input[0] == 'O'){
            num = 35;
            break;
        }

        else if(input[0] == 'X'){
            num = 30;
            break;
        }

        else if(input[0] == 'Y'){
            num = 31;
            break;
        }

        else if(input[0] == 'W'){
            num = 32;
            break;
        }

        else if(input[0] == 'Z'){
            num = 33;
            break;
        }

        else if(input[0] == 'A'+i){
            num = 10 + i;
            break;
        }

        else if(input[0] == 'J'+i){
            num = 18 + i;
            break;
        }

        else if(input[0] == 'P'+i){
            num = 23 + i;
            break;
        }
    }


    sum = (num/10%10) + (num%10)*9 + tmp[0]*8 + tmp[1]*7 + tmp[2]*6 + tmp[3]*5 + tmp[4]*4 + tmp[5]*3 + tmp[6]*2 + tmp[7] + tmp[8];
    sum %= 10;
    if(tmp[0] != 1 && tmp[0] != 2){
        printf("WRONG!!!\n");
    }
    else if(sum == 0){
        printf("CORRECT!!!\n");
    }
    else{
        printf("WRONG!!!\n");
    }
}
