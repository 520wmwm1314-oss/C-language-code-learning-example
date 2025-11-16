#include <stdio.h>
int main()
{
    int t;
    int h,m;
    int spend;
    scanf("%d %d",&t,&spend);


    h = t/100;
    m = t%100;
    int total = h*60+m+spend;

    total = (total%(24*60)+(24*60))%(24*60);//负数mod归一化公式

    h = total/60;
    m = total%60;

    printf("%d%02d",h,m);
    return 0;
}
