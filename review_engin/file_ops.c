#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int my_var1, my_var2;
    FILE *f = fopen("test.txt", "r");
    
    while(fscanf(f,"%d %d", &my_var1, &my_var2) == 2){
        printf("%d\n", my_var2);
    }
    fclose(f);
    return 0;
}