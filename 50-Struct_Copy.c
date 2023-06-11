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
    printf("Enter Your Class and Section: "); scanf("%hd %c", &info->class, &info->section);
    printf("Enter Your Roll NO: "); scanf("%d", &info->roll_no);
}

void Print_Info(Student_Info* info){
    printf("\nName: %s", info->name);
    printf("\nClass and Section: %d %c", info->class, info->section);
    printf("\nRoll NO: %d\n", info->roll_no);
}

void Struct_Copy(void *dest, void *src, size_t n) 
{ 
    char *csrc = (char *)src; 
    char *cdest = (char *)dest; 
  
    for (int i=0; i<n; i++) 
        cdest[i] = csrc[i]; 
} 
 


int main(){


    Student_Info student1;
    Student_Info student2;


    printf("\nEnter Info of student 1:");
    Input_Info(&student1);



    printf("\n\n------------STUDENT INFO-------------\n");
    printf("\nInfo of student 1:");
    Print_Info(&student1);


    Struct_Copy(&student2, &student1, sizeof(student1));


    printf("\nInfo of student2 copied from student1 :");
    Print_Info(&student2);



    return 0;


}
