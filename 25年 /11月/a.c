#include <stdio.h>
int main()
{
    int num = 0;
    int temp = 0;
    int sum = 0;

    while(temp != -1){
        scanf("%d",&temp);
        if(temp != -1){
            sum += temp;
            num++;
        }
    }
    int output = sum/num;
    printf("%d",output);
    return 0;
}
