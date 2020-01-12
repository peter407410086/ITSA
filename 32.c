#include<stdio.h>
#include<string.h>

int main()
{
    int cnt, i, tmcnt;
    char a[105];

    fgets(a, 101, stdin);
    scanf("%d", &cnt);

    for(i  =  0; i < strlen(a); i++){
        if((int)a[i] >= 'A' && (int)a[i] <= 'Z')
		{
			a[i] = (char)(((int)(a[i] - 'A') + cnt) % 26 + 'A');
		}
		else if((int)a[i] >= 'a' && (int)a[i] <= 'z')
		{
			a[i] = (char)(((int)(a[i] - 'a') + cnt) % 26 + 'a');
		}
		else if((int)a[i] >= '0' && (int)a[i] <= '9')
		{
			a[i] = (char)(((int)(a[i] - '0') + cnt) % 10 + '0');
		}
		printf("%c", a[i]);
    }
}
