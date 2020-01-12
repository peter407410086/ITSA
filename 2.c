#include<stdio.h>

int main()
{
    double ans;
    int input;
    while(scanf("%d", &input) != EOF){
        ans = (double)input * 1.6;
        printf("%.1f\n", ans);
    }
}
