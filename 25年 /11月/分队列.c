#include <stdio.h>
int main()
{
    int l;
    scanf("%d",&l);
    for(int i=1;i<=l;i+=2){
        if(i>1) printf(" ");
        printf("%d",i);
    }
    return 0;
}
