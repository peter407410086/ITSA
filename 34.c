#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    float tall;

    while(scanf("%f %d", &tall, &i) != EOF){
        if(i == 1){
            printf("%.1f\n", (tall - 80) * 0.7);
        }
        else{
            printf("%.1f\n", (tall - 70) * 0.6);
        }
    }
}
