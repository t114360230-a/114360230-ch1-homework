#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    printf("請輸入2個整數: ");
    scanf("%d %d", &a, &b);

    if (a % b == 0)
        printf("%d是%d的倍數\n", a, b);
    else
        printf("%d不是%d的倍數\n", a, b);

    return 0;
}
