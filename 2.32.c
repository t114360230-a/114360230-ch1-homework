#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main() {
    double h, w, BMI;

    printf("BMI 計算器\n");
    printf("請輸入體重 (kg): ");
    scanf("%lf", &w);

    printf("請輸入身高 (cm): ");
    scanf("%lf", &h);

    BMI = w / pow(h / 100, 2);
    printf("BMI = %.2f\n", BMI);

    if (BMI < 18.5)
        printf("體重過輕\n");
    else if (BMI >= 18.5 && BMI < 24.9)
        printf("體重正常\n");
    else if (BMI >= 24.9 && BMI < 29.9)
        printf("體重過重\n");
    else
        printf("肥胖\n");

    return 0;
    };