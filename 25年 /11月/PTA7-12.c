#include <stdio.h>
int main()
{
    int y,m,d;
    scanf("%d-%d-%d",&m,&d,&y);
    //%04d表示输出整数,不足四位以0补足
    //类似的还有之前的%.2d,是保留小数后两位
    printf("%04d-%02d-%02d",y,m,d);
    return 0;
}
