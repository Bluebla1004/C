#include <stdio.h>
main( )
{
    int age;
    printf("���̸� �Է��ϼ���:");
    scanf("%d", &age);

    if (age >= 18) {
        printf("�����Դϴ�\n�����ϼ���");
    } else {
        printf("�̼������Դϴ�\n����Ұ��Դϴ�");
    }
}
