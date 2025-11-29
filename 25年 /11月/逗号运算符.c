#include <stdio.h>
int main()
//一般情况下，逗号运算符用在for循环中，比如我们想多添加条件
{
    int a = (1+2,4+1);
    printf("%d",a);
}
