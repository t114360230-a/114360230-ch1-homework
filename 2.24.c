#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    printf("請輸入一個數:");
    scanf("%d",&a);
    if(a%2==0){printf("%d是偶數",a);}
    else printf("%d是奇數",a);
}