#include <stdio.h>
int main()
{
    const double PASS = 0.6;   //及格率
    int scores;             //分数
    int fullScores;         //满分
    int passingScores;      //及格线

    printf("输入你的成绩:");
    scanf("%d", &scores);
    printf("输入测验总分:");
    scanf("%d", &fullScores);

    passingScores = fullScores * PASS;

    if (scores >= passingScores)
        printf("你及格了,并且超过及格线%d分",
            scores - passingScores);
    else
        printf("你不及格,并且低于及格线%d分",
            passingScores - scores);

    return 0;

}
