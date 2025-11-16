#include <stdio.h>
int main()
{
    int a = 2;
    //a++输出a+1以前的结果,也就是2,但他会使a+1,a就等于3了
    printf("a++ = %d\n",a++);
    //++a输出a+1以后的结果,也就是4
    printf("++a = %d\n",++a);
    //--同理
    printf("a-- = %d\n",a--);
    printf("--a = %d\n",--a);

    printf("%d",1 + 2 + (3 + 4) * ((5 * 6 % 7 / 8) - 9) * 10);


}
