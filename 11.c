#include <stdlib.h>
#include <stdio.h>

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    while((a %= b) > 0 && (b %= a) > 0){}//除到有人被整除
    printf("%d\n", a+b);
}
