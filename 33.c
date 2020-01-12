#include<stdio.h>
#include<string.h>

int main()
{
    int i, cnt = 0, a[10000], sum;
    double ans = 0.0;


    while(scanf("%d", &a[cnt]) != EOF){
        sum += a[cnt];
        cnt++;
    }
    ans = (double)sum / cnt;
    printf("Size: %d\n", cnt);
    printf("Average: %.3f\n", ans);
}
