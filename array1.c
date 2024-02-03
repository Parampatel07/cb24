// Example of Input and Output in array
#include <stdio.h>
void main()
{
     int marks[5];
     int count = 0;

     for (count = 0; count < 5; count++)
     {
          printf("Enter value of marks %d ", count + 1);
          scanf("%d", &marks[count]);
     }

     for (count = 0; count < 5; count++)
     {
          printf("\nMarks of student %d are %d ", count + 1, marks[count]);
     }
     // printf("\nMarks of student 2 are %d ", marks[1]);
     // printf("\nMarks of student 3 are %d ", marks[2]);
     // printf("\nMarks of student 4 are %d ", marks[3]);
     // printf("\nMarks of student 5 are %d ", marks[4]);
     // printf("Enter value of marks 2 ");
     // scanf("%d", &marks[1]);
     // printf("Enter value of marks 3 ");
     // scanf("%d", &marks[2]);
     // printf("Enter value of marks 4 ");
     // scanf("%d", &marks[3]);
     // printf("Enter value of marks 5 ");
     // scanf("%d", &marks[4]);
}