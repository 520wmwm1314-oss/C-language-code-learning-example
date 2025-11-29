#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int num = (rand())%100;//获取随机的两位数
    int choice;
    int count;
    while(1){

        count++;//每次进入循环就加一
        scanf("%d",&choice);
        if(choice == num) break;
        if(choice < num){
            printf("小了\n");
        }
        else if(choice > num){
            printf("大了\n");
        }

    }
    //猜对时
    printf("恭喜你答对啦！答案是%d\n",num);
    printf("您一共猜了%d次",count);

    return 0;


}
/*
一百以内的数，只要方法正确，最多7次可以猜出来
那就是——二分法
50
大了（表明在1~50区间内）
25
大了
17
大了
8
大了
4
大了
2
大了
1
正确！
以上只用了7次，到了最后可选的数就只有一个，是唯一的了

*/
