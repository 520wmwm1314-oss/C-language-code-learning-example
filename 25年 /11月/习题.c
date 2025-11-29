#include <stdio.h>
int main()
{
    int  points;
    char scores;
    scanf("%d",&points);
    int grade = points/10;
    switch(grade){
    case 10:
    case 9:
        scores = 'A';
        break;
    case 8:
        scores = 'B';
        break;
    case 7:
        scores = 'C';
        break;
    case 6:
        scores = 'D';
        break;
    default:
        scores = 'E';
        break;

    }
    printf("%c",scores);
    return 0;
}
