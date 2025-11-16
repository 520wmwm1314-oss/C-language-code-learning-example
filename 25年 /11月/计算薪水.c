#include <stdio.h>
int main()
{

    const double RATE = 8.25;
    const int STANDARD = 40;
    double pay =0.0;
    int hours;

    printf("请输入工作的小时数：");
    scanf("%d",&hours);
    printf("\n");

    //不加花括号的时候if就会执行紧跟在下面的一条语句
    if (hours > STANDARD)
        pay=STANDARD *RATE+(hours-STANDARD)*(RATE*1.5);
    //不加花括号的时候else就会执行紧跟在下面的一条语句
    else
        pay= hours * RATE;

    printf("应付工资：%f\n",pay);

    return 0;
}
