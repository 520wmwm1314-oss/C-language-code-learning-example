#include <stdio.h>
int main(){
    const int AMOUNT = 100;
    int price , change;

    printf("请输入价格\n");
    scanf("%d",&price);

    change = AMOUNT - price;

    printf("找零%d元",change);
}
/*
const变量要求全大写
*/
