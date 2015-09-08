#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int my_var1;
    FILE *f = fopen("test.txt", "r");
    
    while(fscanf(f,"%d", &my_var1) == 1){
        printf("%d\n", my_var2);
    }
    fclose(f);
    return 0;
}
