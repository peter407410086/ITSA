#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j=0,cnt=0,MaxCnt,m=0,n=0;
    int u,d,l,r;
    scanf("%d",&MaxCnt);
    for(cnt=0;cnt<MaxCnt;cnt++)
    {
        scanf("%d %d",&m,&n);
        int a[m+2][n+2];
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(a[i][j]==1)
                {
                    u=a[i-1][j];
                    d=a[i+1][j];
                    l=a[i][j-1];
                    r=a[i][j+1];
                    if(u==0||d==0||l==0||r==0)
                    {
                        printf("0 ");
                    }
                    else{printf("_ ");}
                }
                else{printf("_ ");}
            }
            printf("\n");
        }
        if(cnt!=(MaxCnt-1)){printf("\n");}
    }
}
