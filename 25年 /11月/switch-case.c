#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    switch(a){ //只能是整数
    case 1://不仅可以用数字表示，还可以用表达式
    case 2:
        printf("早上好");
        break;
    case 3:
    case 4:
        printf("下午好");
        break;
    default:
        printf("晚上好");
        break;

    //每个case在同一个空间里，只是表示从哪里开始做，并不实现结束

    }
    return 0;
}
