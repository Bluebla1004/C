#include <stdio.h>
main( )
{
	int a;
	printf("양수를 입력: ");
	scanf("%d", &a);
	if (a % 2 == 0)
		printf("입력한 수 %d는 짝수입니다.", a);
	else
		printf("입력한 수 %d는 홀수입니다.", a);
}
