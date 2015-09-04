#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int num_lines;
    printf("Number of lines : ");
    scanf("%d", &num_lines);
    
    int i, j;
    for(i = 1 ; i <= num_lines ; i++){
        //will be executed for each line
        for(j = num_lines - i ; j > 0 ; j--){
            printf(" ");
        }
        for(j = 0 ; j < 2*i-1 ; j++){
            printf("*");
        }
        
        printf("\n");
    }
   
}