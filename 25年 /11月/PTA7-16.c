#include <stdio.h>
int main()
{
    int n;
    int r;
    scanf("%d",&n);
    if(n<0){
        r = -1;
    }
    else if(n == 0){
        r = 0;
    }
    else{
        r =1;
    }
    printf("sign(%d) = %d",n,r);
    return 0;
}
