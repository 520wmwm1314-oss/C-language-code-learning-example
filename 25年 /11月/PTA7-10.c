#include <stdio.h>
int main()
{
    int a,b;

    scanf("%d %d",&a,&b);

    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);

    if(a%b == 0)
        printf("%d / %d = %d\n",a,b,a/b);
    else
        //我用(float)进行了强制类型转换,跟规范
        printf("%d / %d = %.2f\n",a,b,(float)a/b);

    return 0;
}
