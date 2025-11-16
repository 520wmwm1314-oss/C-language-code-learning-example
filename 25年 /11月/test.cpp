#include <stdio.h>
int main()
{
    int a,b,temp;
    a = 1;
    b = 4;

    printf("a = %d b = %d\n",a,b);
    //将a的值赋给temp.temp=1
    temp = a;
    //将b的值赋给a.a=4
    a = b;
    //将temp的值赋给b.b=1
    b = temp;
    printf("a = %d b = %d\n",a,b);
}
