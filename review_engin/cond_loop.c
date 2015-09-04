#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int user_input;
    do{
        printf("Enter a number : ");
        scanf("%d", &user_input);
        if(user_input > 0)
            printf("Positive\n");
        else
            printf("Negative\n");
    } while(user_input != 0);
    
    return EXIT_SUCCESS;
}