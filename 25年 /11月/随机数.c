#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int a = rand();
    printf("%d\t",a);
    int b = a%100;
    printf("%d",b);
    return 0;
}
