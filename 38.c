#include<stdio.h>
#include<string.h>

int main()
{
    int i, a;
    float summer = 0, nsummer = 0;

    scanf("%d", &a);

    if(a > 700){
        summer += (a - 700) * 5.63;
        nsummer += (a - 700) * 4.5;
        a = 700;
        }
    if(a > 500){
        summer += (a - 500) * 4.97;
        nsummer += (a - 500) * 4.01;
        a = 500;
    }
    if(a > 330){
        summer += (a - 330) *4.39;
        nsummer += (a - 330) * 3.61;
        a = 330;
    }
    if(a > 120){
        summer += (a - 120) * 3.02;
        nsummer += (a - 120) * 2.68;
        a = 120;
    }
    if(a > 0){
        summer += a * 2.1;
        nsummer += a * 2.1;
    }
    printf("Summer months:%.2f\nNon-Summer months:%.2f\n", summer, nsummer);
}
