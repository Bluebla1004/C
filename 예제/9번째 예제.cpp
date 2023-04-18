#include <stdio.h>
main() {
    int i, count = 0;
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
        count++;
    }
    printf("인쇄된 숫자는: %d", count);
}
