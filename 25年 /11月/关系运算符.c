#include <stdio.h>
int main()
{
    //是就返回1,不是就是0
    printf("%d\n",5>3);
    printf("%d\n",5>=3);
    printf("%d\n",5==3);
    printf("%d\n",5<3);
    printf("%d\n",5<=3);
    printf("%d\n",5!=3);

    //还能这样加
    printf("%d\n",(5>3)+4);

    return 0;
}
//比C++的cout好用,这里可以直接做判断,cout还有if语句;
