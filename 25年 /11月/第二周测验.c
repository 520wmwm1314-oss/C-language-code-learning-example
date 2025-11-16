#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    b =a/1%10*100 + a/10%10*10 + a/100%10;
    printf("%d",b);
    return 0;
}
