#include <stdlib.h>
#include <stdio.h>

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    while((a %= b) > 0 && (b %= a) > 0){}//���즳�H�Q�㰣
    printf("%d\n", a+b);
}
