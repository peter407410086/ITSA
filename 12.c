#include <stdlib.h>
#include <stdio.h>

int f(int x)
{
    if(x == 1 || x == 0){
        return x+1;
    }
    else{
        return f(x-1) + f(x/2);
    }
}

int main(){
    int x, i, j;
    scanf("%d", &x);
    x = f(x);
    printf("%d\n", x);
}
