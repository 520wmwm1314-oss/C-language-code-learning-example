#include <stdio.h>
int main()
{
    int price;
    int money;
    int change;

    printf("输入价格:\n");
    scanf("%d",&price);
    printf("输入支付金额:\n");
    scanf("%d",&money);

    change = money - price;

    if(change < 0)
    {
        printf("你给不起,还差%d元",price - money);
        return 0;
    }

    printf("找零%d元",change);
    return 0;
}
