#include <stdio.h>
int main()
{
    int num;
    int temp;
    int count = 0;
    int output = 0;
    int sign = 1;
    scanf("%d",&num);
    if(num < 0){
        sign = -1;
        num = -num;//转换正数
    }
    do{

        temp = num%10;//接受个位数
        output = output*10+temp;//存储个位数
        num/=10;//删去个位数
        count++;


    }while(num != 0);
    printf("一共有%d位\n",count);
    printf("逆序后为%d",sign*output);
    return 0;
}

/*
num temp    output  a   count
X   X       0       1   0
123 3       3       10  1
12  2       32      10  2
1   1       321     10  3
0   X       X       X   X       <跳出循环>
*/
