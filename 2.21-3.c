#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    printf("  *\n");
    printf(" ");
    for(i=0;i<3;i++)
        printf("*");
    printf(" \n");
    
    for(i=0;i<5;i++)
        printf("*");
    printf("\n");
    for(i=0;i<6;i++)
        printf("  *\n");
}