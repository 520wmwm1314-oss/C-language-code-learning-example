#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    while(a>0){
        b++;
        a /= 10;
        printf("a = %d\tb = %d\n",a,b);
    }

    return 0;
}
/*
÷Ω± Õ∆À„

a        b
100      0
10       1
1        2
0        3

*/
