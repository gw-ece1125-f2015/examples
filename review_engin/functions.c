#include <stdio.h>
#include <stdlib.h>


int a=10;

int my_function(){
    printf("a = %d\n", a);
}

int main(){
    printf("a = %d\n", a);
    a = 20;
    my_function();
    if(a>0){
        int a = -10;
        printf("a = %d\n", a);
    }
    
}