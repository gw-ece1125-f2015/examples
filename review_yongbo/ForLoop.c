#include <stdio.h>

int main (void)
{
    int i;
    int numOfLoops;
    int initial = 20;
    printf("Please input the number of loops\n");
    scanf("%d", &numOfLoops);  // Please note the & symbol;
    for ( i = 0; i < numOfLoops; i++){
        initial  =  initial + 1;
    }
    printf("Finally initial becomes: %d\n", initial);
    return 0;
}