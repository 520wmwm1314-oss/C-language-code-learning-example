#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int r;
    if(a>0){
        r = 1;
    } else if(a == 0){
        r = 0;
    } else{
        r = -1;
    }
    printf("%d",r);
    return 0;
}
