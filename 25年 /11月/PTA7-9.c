#include <stdio.h>
int main()
{
    int a,b,c,d;
    int sum;
    double average;

    scanf("%d %d %d %d",&a,&b,&c,&d);
    sum = a+b+c+d;
    average = sum / 4.0;

    //在%f的百分号与f之间加上.<保留小数位数>就可以设定要保留的小数位,%.2f就是保留两位,%.3f就是三位
    printf("Sum = %d; Average = %.1f",sum,average);

    return 0;
}
