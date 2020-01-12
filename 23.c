#include<stdio.h>
#include<string.h>

int main()
{
    int i, j, cnt = 0, tmp;

    int pay = 0, money;
    int coin[3] = {1, 5, 50}, count[3];

    scanf("%d,%d,%d,%d", &money, &count[0], &count[1], &count[2]);

    money = money - count[0] * 15 - count[1] * 20 - count[2] * 30;
    if (money < 0)
        printf("0\n");
    else
    {
        for (int i = 2; i > -1; i--)
        {
            count[i] = money / coin[i];
            money %= coin[i];
        }
        printf("%d,%d,%d\n", count[0], count[1], count[2]);
    }
}
