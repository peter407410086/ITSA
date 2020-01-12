#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
    int input, i, tmp;
    scanf("%d", &input);
    if(input < 0){
        input += 256;
    }
    int ans[7];
    for(i = 0; i <= 7; i++){
        printf("1 = %d\n", input);
        ans[7-i] = (input % 2);
        printf("2 = %d\n", input);
        input /= 2;
        printf("3 = %d\n", input);
    }
    for(i = 0; i <= 7; i++){
        printf("%d", ans[i]);
    }

}
