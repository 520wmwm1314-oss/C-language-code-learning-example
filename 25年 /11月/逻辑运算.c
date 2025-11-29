#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    printf("%d\n",a>0||b>0);
    printf("%d\n",a>0&&b>0);
    printf("%d\n",!(a>0));
    printf("%d\n",!(b<0));

    char c;
    scanf("%c",&c);
    if('a'<=c&&c<='z'){
        printf("Ð¡Ð´×ÖÄ¸");
    }
    else if('A'<=c&&c<='Z'){
        printf("´óÐ´×ÖÄ¸");
    }
    else{
        printf("²»ÊÇ×ÖÄ¸");
    }
    return 0;
}
