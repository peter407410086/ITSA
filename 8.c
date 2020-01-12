#include <stdlib.h>
#include <stdio.h>

int main(){
    int x, i, sum = 0;
    scanf("%d", &x);
    for(i = 1 ;i <= x; i++){
        if(i % 3 == 0){
            sum += i;
        }
    }
    printf("%d\n", sum);
}
