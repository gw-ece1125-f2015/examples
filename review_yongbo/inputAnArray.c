#include<stdio.h>
#include<stdlib.h>

void increase(int * p, int count, int number) 
//In increase function, I want to increase all integers pointed by p by number, count means how many integers are in p
{
    int i;
    for(i=0; i<count; i++){
        p[i]=p[i]+number;
    }
    count = count +5;
}

void increase_version2(int * p, int * count, int number)
//Notice the different with increase_version, the count is passed as pointer.
{ 
    int i;
    for(i=0; i<*count; i++){
        p[i]=p[i]+number;
    }
    *count = *count +5;
}


int main(void){
    FILE * file_in = fopen("myInputFile.txt", "r");
    int * p;
    int tmp,i;
    int count=0;
    while(fscanf(file_in,"%d",&tmp)==1){
        count++;
    }
    p = calloc(count, sizeof(int));
    fclose(file_in);
    file_in = fopen("myInputFile.txt", "r");
    for(i=0; i<count; i++){
        fscanf(file_in,"%d", &p[i]);
    }
    
    printf("My array pointed by p is:\n");
    for(i=0; i<count; i++){
        printf("%d ", p[i]);
    }
    printf("\n");
    printf("The count before increase function is: %d\n", count);
    
    fclose(file_in);
    increase(p, count, 5);
    printf("2: My array pointed by p is:\n");
    for(i=0; i<count; i++){
        printf("%d ", p[i]);
    }
    printf("\n");
    printf("2: The count now is: %d\n", count);
    
    increase_version2(p, &count, 5);
    printf("3: My array pointed by p is:\n");
    for(i=0; i<count; i++){
        printf("%d ", p[i]);
    }
    printf("\n");
    printf("3: The count now is: %d\n", count);
    
    
    return EXIT_SUCCESS;
}
