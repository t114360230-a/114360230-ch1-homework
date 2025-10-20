#include <stdio.h>
#include <stdlib.h>

void print_big_C() {
    printf("  CCCCC\n");
    printf(" C\n");
    printf("C\n");
    printf("C\n");
    printf("C\n");
    printf(" C\n");
    printf("  CCCCC\n");
}

// 印出大寫的 H
void print_big_H() {
    printf("H     H\n");
    printf("H     H\n");
    printf("H     H\n");
    printf("HHHHHHH\n");
    printf("H     H\n");
    printf("H     H\n");
    printf("H     H\n");
}

int main() {
    print_big_C();
    printf("\n");
    print_big_C();
    printf("\n");
    print_big_H();
    
    return 0;
    }