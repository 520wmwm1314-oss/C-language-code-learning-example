#include <stdio.h>
int main()
{
    int a;
    int b;
    int max;

    printf("输入两个数:\n");

    printf("a = ");
    scanf("%d",&a);

    printf("b = ");
    scanf("%d",&b);

    if(a>b){
        max = a;
        printf("a最大,是%d\n",max);
    }else{
        max = b;
    }
    printf("%d最大\n",max);

    return 0;
}
