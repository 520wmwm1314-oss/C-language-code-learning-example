#include <stdio.h>
int main()
{
    unsigned long a;
    int b;
    scanf("%d^%d",&a,&b);
    while( b==0 ){
        a*=a;
        b--;
    }
    printf("%d",a);
    return 0;

}
