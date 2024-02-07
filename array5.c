// Example of Multiarray
// Write a programe to take 5 students marks for 5 subject
#include <stdio.h>
void main()
{
     int students[5][5];
     int count = 0;
     int flash = 0;
     int total[5];
     int student_total = 0;
     float average = 0;
     for (flash = 0; flash < 5; flash++)
     {
          printf("\nEnter marks for student %d \n", flash + 1);
          for (count = 0; count < 5; count++)
          {
               printf("Enter marks for subject %d ", count + 1);
               scanf("%d", &students[flash][count]);
          }
     }
     for (flash = 0; flash < 5; flash++)
     {
          printf("\nMarks for student %d ", flash + 1);
          for (count = 0; count < 5; count++)
          {
               printf("\nMarks of subject %d = %d ", count + 1, students[flash][count]);
          }
     }

     for (flash = 0; flash < 5; flash++)
     {
          total[flash] = 0;
          for (count = 0; count < 5; count++)
          {
               total[flash] = students[flash][count] + total[flash];
          }
          printf("\nThe value of total for student %d is %d ", flash + 1, total[flash]);
     }

     for (count = 0; count < 5; count++)
     {
          student_total = total[count] + student_total;
     }
     printf("\nThe total of class is %d ", student_total);

     average = student_total / 5;
     printf("\nThe value of average is %f ", average);
     // student_total = total[1] + student_total;
     // student_total = total[2] + student_total;
     // student_total = total[3] + student_total;
     // student_total = total[4] + student_total;

     // total[1] = 0;
     // for (count = 0; count < 5; count++)
     // {
     //      total[1] = students[1][count] + total[1];
     // }
     // printf("\nThe value of total for student 2 is %d ", total[1]);
     // total[2] = 0;
     // for(count = 0 ; count < 5 ; count++)
     // {
     //      total[2] = students[2][count] + total[2];
     // }
     // printf("\nThe value of total for student 3 is %d ", total[2]);
     // total[2] = students[2][1] + total[2];
     // total[2] = students[2][2] + total[2]
     // total[1] = students[1][1] + total[1];
     // total[1] = students[1][2] + total[1];
     // total[1] = students[1][3] + total[1];
     // total[1] = students[1][4] + total[1];
     // total[0] = students[0][1] + total[0];
     // total[0] = students[0][2] + total[0];
     // total[0] = students[0][3] + total[0];
     // total[0] = students[0][4] + total[0];

     // printf("\nMarks for student 2 ");
     // for (count = 0; count < 5; count++)
     // {
     //      printf("\nMarks of subject %d = %d ", count + 1, students[1][count]);
     // }
     // printf("Marks of subject 2 = %d ",students[0][1]);
     // printf("Marks of subject 3 = %d ",students[0][2]);
     // printf("Marks of subject 3 = %d ",students[0][3]);
     // printf("Marks of subject 3 = %d ",students[0][4]);

     // printf("\nEnter marks for student 2 \n");
     // for (count = 0; count < 5; count++)
     // {
     //      printf("Enter marks for subject %d ", count + 1);
     //      scanf("%d", &students[1][count]);
     // }

     // printf("\nEnter marks for student 3 \n");
     // for( count = 0 ; count < 5 ; count++)
     // {
     //      printf("Enter marks for subject %d ",count+1);
     //      scanf("%d", &students[2][count]);
     // }
     // printf("Enter marks for subject 2 ");
     // scanf("%d", &students[2][1]);
     // printf("Enter marks for subject 2 ");
     // scanf("%d", &students[1][1]);

     // printf("Enter marks for subject 3 ");
     // scanf("%d", &students[1][2]);

     // printf("Enter marks for subject 4 ");
     // scanf("%d", &students[1][3]);

     // printf("Enter marks for subject 5 ");
     // scanf("%d", &students[1][4]);

     // printf("\nEnter marks for subject 2 ");
     // scanf("%d", &students[0][1]);
     // printf("\nEnter marks for subject 3 ");
     // scanf("%d", &students[0][2]);
     // printf("\nEnter marks for subject 4 ");
     // scanf("%d", &students[0][3]);
}