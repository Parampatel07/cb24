// Write a programe to store 5 students 1 subject marks , percentage , name
#include <stdio.h>
#include <stdlib.h>
struct students
{
     int marks;
     float percentage;
     char name[25];
};

void main()
{
     struct students student[3];
     int count = 0;

     for (count = 0; count < 3; count++)
     {
          printf("Enter marks for student %d ", count + 1);
          scanf("%d", &student[count].marks);
          printf("Enter percentage for student %d ", count + 1);
          scanf("%f", &student[count].percentage);
          fflush(stdin);
          printf("Enter name for stundent %d ", count + 1);
          scanf("%s", &student[count].name);
     }
     for (count = 0; count < 3; count++)
     {
          printf("\n\nThe name of student %d is %s ", count + 1, student[count].name);
          printf("\nThe value of marks for student %d is %d ", count + 1, student[count].marks);
          printf("\nThe percenetage of student %d is %.2f ", count + 1, student[count].percentage);
     }

     // printf("Enter marks for student 2 ");
     // scanf("%d", &s2.marks);
     // printf("Enter percentage for student 2 ");
     // scanf("%f", &s2.percentage);
     // fflush(stdin);
     // printf("Enter name for student 2 ");
     // scanf("%s", &s2.name);


     // printf("\nThe name of student 2 is %s ", s2.name);
     // printf("\nThe value of marks for student 2 is %d ", s2.marks);
     // printf("\nThe percenetage of student 2 is %.2f", s2.percentage);
}