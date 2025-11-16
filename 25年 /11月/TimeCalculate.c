#include <stdio.h>
int main()
{
    int hour1,minute1;
    int hour2,minute2;
    int hourA,minuteA;

    scanf("%d %d",&hour1,&minute1);
    scanf("%d %d",&hour2,&minute2);

    hourA = hour2 - hour1;
    //将小时转换为分钟,相减后得出的数取余60
    minuteA = ((hour2*60+minute2)-(hour1*60+minute1))%60;

    printf("%d %d",hourA,minuteA);
}
