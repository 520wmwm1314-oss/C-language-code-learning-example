#include <stdio.h>
int main()
{
    int n;
    int a=1;
    int r=1;
    printf("n!=");
    scanf("%d",&n);
    while(n>=a){
        r=r*a;
        a++;
    }
    printf("n!=%d",r);
    return 0;
}
/*
n   a   r
3   1   1
3   2   1(2)
3   3   2(6)
*/
