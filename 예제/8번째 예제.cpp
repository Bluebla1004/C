#include <stdio.h>
main( )
{
	int a;
	printf("����� �Է�: ");
	scanf("%d", &a);
	if (a % 2 == 0)
		printf("�Է��� �� %d�� ¦���Դϴ�.", a);
	else
		printf("�Է��� �� %d�� Ȧ���Դϴ�.", a);
}
