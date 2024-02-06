// Example of Multiarray
// Write a programe to take 5 students marks for 5 subject
#include <stdio.h>
void main()
{
     int students[5][5];
     int count = 0;
     int flash = 0;

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