#include<stdio.h>
#include<string.h>

int main()
{
    int i, a;

    scanf("%d", &a);

    if(a % 400 == 0){
        printf("Bissextile Year\n");
    }
    else if(a % 100 == 0){
        printf("Common Year\n");
    }
    else if(a % 4 == 0){
        printf("Bissextile Year\n");
    }
    else{
        printf("Common Year\n");
    }
}
