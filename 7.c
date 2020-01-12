#include <stdlib.h>
#include <stdio.h>

int main(){
    int cnt, i;
    int a, b, c, d;
    char x;
    scanf("%d", &cnt);
    for(i = 0; i < cnt; i++){
        scanf(" %c%d%d%d%d", &x, &a, &b, &c, &d);
        if(x == '+'){
            printf("%d %d\n", a+c, b+d);
        }
        else if(x == '-'){
            printf("%d %d\n", a-c, b-d);
        }
        else{
            printf("%d %d\n", a*c - b*d, b*c + a*d);
        }
    }
}
