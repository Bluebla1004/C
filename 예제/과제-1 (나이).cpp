#include <stdio.h>
main( )
{
    int age;
    printf("나이를 입력하세요:");
    scanf("%d", &age);

    if (age >= 18) {
        printf("성인입니다\n입장하세요");
    } else {
        printf("미성년자입니다\n입장불가입니다");
    }
}
