#include <stdio.h>
#include <stdlib.h>


int main() {
    double a, b, c, g, s, p, t;

    printf("請輸入總里程數 (km): ");
    scanf("%lf", &a);

    printf("請輸入油價 (每公升多少錢): ");
    scanf("%lf", &b);

    printf("請輸入 1 公升汽油可以跑幾公里: ");
    scanf("%lf", &c);

    g = (a / c) * b; // 油費
    printf("請輸入停車費: ");
    scanf("%lf", &s);

    printf("請輸入過路費: ");
    scanf("%lf", &p);

    t = g + s + p;

    printf("總共花費 %.1f 元\n", t);

    return 0;
}
