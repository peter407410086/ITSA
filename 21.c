#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    float max, min, input;
    int i;

    scanf("%f", &input);
    max = input;
    min = input;

    for(i = 1; i < 10; i++){
        scanf("%f", &input);
        if(input > max){max = input;}
        if(input < min){min = input;}
    }
    printf("maximum:%.2f\n", max);
    printf("minimum:%.2f\n", min);
}
