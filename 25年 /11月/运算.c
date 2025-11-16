#include <stdio.h>
int main(){
printf("请分别输入身高的英尺和英寸(如输入\"57\"表示5英尺7英寸)：");
double foot;
double inch;
//scanf不能使用%d,要用%lf
scanf("%lf %lf", &foot,&inch);
//printf不能 使用%d,要用%f
printf("身高是%f米。\n",
        ((foot + inch / 12) * 0.3048));

}
/*
整数
int
printf("%d",...)
scanf("%d",...)
带小数点的数
double
printf("%f",...)
scanf("%lf",...)
*/
