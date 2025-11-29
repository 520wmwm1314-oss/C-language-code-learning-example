#include <stdio.h>
int main()
{
	int n;
	int a=1;
	scanf("%d",&n);
	for(;n>=1;n--){
		a*=n;
	}
	printf("%d",a);
	scanf(" ");
	return 0;
}