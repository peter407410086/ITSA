#include <stdio.h>
#include <stdlib.h>
#include<math.h>

void hanoi(int, char, char, char);


int main(void)
{
    int num[100],i=0,sum=0;
    while((scanf("%d",&num[i]))!=EOF)
    {
        num[i]=pow(num[i],3);
        sum+=num[i];
        i++;
    }
    printf("%d\n",sum);
    return 0;
}
