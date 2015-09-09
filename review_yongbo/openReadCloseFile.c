#include<stdio.h>
#include<stdlib.h>

void increase(int * p, int size, int number){
    int i;
    for(i=0;i<size;i++){
        p[i]=p[i]+number;
    }
}

int main(void)
{
    int * p;
    int tmp,i;
    FILE * in_f = fopen("myInputFile.txt", "r");
    int count=0;
    while(fscanf(in_f,"%d",&tmp)==1){
        count ++;
    }
    printf("There is %d integers in myInputFile\n", count);
    fclose(in_f);
    
    p = calloc(count, sizeof(int));
    in_f = fopen("myInputFile.txt", "r");
    for(i=0;i<count;i++){
        fscanf(in_f, "%d", &p[i]);
    }
    
    printf("Elements in my array p:\n");
    for(i=0;i<count;i++){
        printf("%d ", p[i]);
    }
    printf("\n");
    fclose(in_f);
    
    increase(p, count, 5);
    
    
    FILE * out_f = fopen("myOutputFile", "w");
    for(i=0;i<count;i++){
        fprintf(out_f,"%d ",p[i]);
    }
    fclose(out_f);
    free(p);
    
    return EXIT_SUCCESS;
}