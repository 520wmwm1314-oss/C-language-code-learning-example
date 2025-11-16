#include <stdio.h>
int main()
{
    int hourA,minA;
    int hourB,minB;
    int hourP,minP;

    scanf("%d %d",&hourA,&minA);
    scanf("%d %d",&hourB,&minB);

    hourP = hourB - hourA;
    minP = minB - minA;
    if(minP < 0)
    {
        minP += 60;//借位了,所以要加上一小时
        hourP--;//因为加上了一小时,所以在此要减一
    }

    printf("%d时%d分",hourP,minP);
}
