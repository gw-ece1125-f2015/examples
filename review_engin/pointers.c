#include <stdio.h>
#include <stdlib.h>

void subtract_one(int *a, int size){
    int i;
    for(i = 0 ; i < size ; i++){
        a[i]--;
    }
}


int main(){
    int a = 10, b = 20;
    int* p = &a;
    
    p[5] = 10;
    
    int size = 10;
    p = malloc(size * sizeof(int));
    printf("p = %p\n" , p);
    
    int i;
    for(i = 0 ; i < size ; i++){
        *(p + i) = i*2;
    }
    
    for(i = 0 ; i < size ; i++){
        printf("%d\n", p[i]);
    }
    
    subtract_one(p, size);
    
    for(i = 0 ; i < size ; i++){
        printf("%d\n", p[i]);
    }
    
    return EXIT_SUCCESS;
}







