#include <stdio.h>
#define SIZE 10

int main(void)
{
    int myarray[SIZE];
    int i;
    myarray[3] = 1;
    myarray[SIZE-1] = 10;
    printf("The elements in array are: \n");
    for(i = 0; i<SIZE; i++){
        printf("%d ", myarray[i]);
    }
    printf("\nNow I am going to define another array\n");
    
    int my2ndArray[SIZE] = {324, 234, 1, 35, 21};
    
    printf("The elements in the second array are: \n");
    for(i = 0; i<SIZE; i++){
        printf("%d ", my2ndArray[i]);
    }
    printf("\n");
    
    printf("\nNow I am going to define a multidimensional array\n");
    
    int myMultiArray[4][3] = {
        {1, 2, 4},
        {0, 0, 2},
        {4, 2, 1},
        {4, 7, 2}
    };
    int j,k;
    for(j=0; j<4; j++){
        for (k=0; k<3; k++){
            printf("%d ", myMultiArray[j][k]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}