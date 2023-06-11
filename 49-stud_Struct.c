#include <stdio.h>
#include <string.h>

#define NO_OF_STUD 2

typedef struct
{
    char name[100];
    short class;
    char section;
    int roll_no;
} Student_Info;


void Input_Info(Student_Info* info){
    printf("\nEnter Your Name: "); scanf("%s", &info->name);
    printf("Enter Your Class and Section: "); scanf("%d %c", &info->class, &info->section);
    printf("Enter Your Roll NO: "); scanf("%d", &info->roll_no);
}

void Print_Info(Student_Info* info){
    printf("\nName: %s", info->name);
    printf("\nClass and Section: %d %c", info->class, info->section);
    printf("\nRoll NO: %d\n", info->roll_no);
}


int main(){


    Student_Info student_record[NO_OF_STUD];


    for(int i = 0; i < NO_OF_STUD; i++){
        printf("\nEnter Info of student %d:", i + 1);
        Input_Info(&student_record[i]);
    }



    printf("\n\n------------STUDENT INFO-------------\n");
    for(int i = 0; i < NO_OF_STUD; i++){
        printf("\nInfo of student %d:", i + 1);
        Print_Info(&student_record[i]);
    }



    return 0;


}
