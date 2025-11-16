#include <stdio.h>
int main(){
int a , b;

if(scanf("%d+%d",&a,&b))
printf("%d\n",a+b);

if(scanf("%d-%d",&a,&b))
printf("%d\n",a-b);

if(scanf("%d*%d",&a,&b))
printf("%d\n",a*b);

if(scanf("%d/%d",&a,&b))
printf("%d\n",a/b);

}
