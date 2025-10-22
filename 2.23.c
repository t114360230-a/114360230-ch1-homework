#include <stdio.h>
#include <stdlib.h>



int main() {
    int a, b, c, max, min;
    printf("請輸入三個整數: ");
    scanf("%d %d %d", &a, &b, &c);

    if (b > a) { max = b; }
    else { max = a; }

    if (c > max) { max = c; }

    if (b < a) { min = b; }
    else { min = a; }

    if (c < min) { min = c; }

    printf("最大值: %d\n", max);
    printf("最小值: %d\n", min);

    return 0;
}
