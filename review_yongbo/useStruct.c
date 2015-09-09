#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    struct ssGrade 
    { 
        int ID;
        char name[50];
        int grade;
    };
    int number, i;
    printf("Input number of students:\n");
    scanf("%d", &number);
    struct ssGrade * myList;
    myList = calloc(number,sizeof(struct ssGrade));
    for(i=0;i<number;i++){
        myList[i].ID=i+1;
        printf("Please input the name for student (ID: %d)\n", myList[i].ID);
        scanf("%s", myList[i].name);
        printf("Please input the grade for student (ID: %d)\n", myList[i].ID);
        scanf("%d", &myList[i].grade);
    }
    
    printf("Summary for student grades:\n");
    printf("ID\tName\t\tGrade\n");
    for(i=0;i<number;i++){
        printf("%d\t%s\t\t%d\n",myList[i].ID,myList[i].name,myList[i].grade);
    }
    free(myList);
    return 0;
}
