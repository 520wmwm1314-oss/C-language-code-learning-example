#include <stdio.h>
int main(){
int money , price , change;

printf("输入存款,价格(用 , 隔开)\n");
scanf("%d,%d",&money,&price);

change = money - price;

printf("找零%d元",change);
}
