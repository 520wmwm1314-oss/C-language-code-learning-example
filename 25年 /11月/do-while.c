#include <stdio.h>
int main()
{
    int a;
    int n;
    scanf("%d",&a);
    do
    {
        a/=10;
        n++;
    }while(a>0);
    printf("%d",n);
    return 0;
}

/*
while与dowhile的差别
while先判断在进入循环体,dowhile正好相反
while可以一次循环都不做,但dowhile至少做一次
*/
