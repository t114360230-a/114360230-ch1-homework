#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
   
        printf("number\tsquare\tcube\n");
        int i,j,k;
        for(i=0;i<10;i++){
            j=pow(i,2);
            k=pow(i,3);
            printf("%d\t%d\t%d\n",i,j,k);
        }
    
        
    };