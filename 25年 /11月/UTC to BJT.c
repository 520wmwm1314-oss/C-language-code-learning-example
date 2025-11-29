#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int h,m;
    h = t/100;
    m = t%100;
    h -= 8;

    if(h<0) h+=24;

    int output;
    if(h==0){
        output = m;
    }
    else{
        output=h*100+m;
    }
    printf("%d",output);
    return 0;
}
