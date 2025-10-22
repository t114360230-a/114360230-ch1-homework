#include <stdio.h>
#include <stdlib.h>

void print_big_C() {
    printf(" CCCCCCCCCCCCC \n");
    printf("C             C\n");
    printf("C             C\n");
    printf("C             C\n");
}


void print_big_H() {
    printf("HHHHHHHHHHHHHHH\n");
    printf("       H       \n");
    printf("       H       \n");
    printf("       H       \n");
    printf("HHHHHHHHHHHHHHH\n");
}

int main() {
    print_big_C();
    printf("\n");
    print_big_C();
    printf("\n");
    print_big_H();
    
    return 0;
    }