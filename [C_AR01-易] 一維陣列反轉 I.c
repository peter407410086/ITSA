#include <stdio.h>
#include <stdlib.h>

void hanoi(int, char, char, char);


int main(void)
{
    int num[100],i=0,cnt=0;
    while((scanf("%d",&num[i]))!=EOF)
    {
        i++;
        cnt++;
    }

    for(i=0;i<cnt;i++)
    {
        printf("%d",num[cnt-1-i]);
        if(i!=(cnt-1))
        {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
