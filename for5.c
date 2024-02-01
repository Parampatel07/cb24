// Write a programe to print hollow inverted half pyramid
// https://i1.faceprep.in/fp/articles/img/46684_1580817324.png
#include <stdio.h>
void main()
{
     int count = 0;
     int space = 0;
     int size = 0;
     printf("Enter size of triangle ");
     scanf("%d", &size);
     for (count = 0; count < size; count++)
     {
          printf("*");
     }
     for (count = size - 3; count >= 0; count--)
     {
          printf("\n");
          printf("*");
          for (space = 0; space < count; space++)
          {
               printf(" ");
          }
          printf("*");
     }
     printf("\n");
     printf("*");
     // printf("\n");
     // printf("*");
     // for (space = 0; space < 4; space++)
     // {
     //      printf(" ");
     // }
     // printf("*");
     // printf("\n");
     // printf("*");
     // for (space = 0; space < 3; space++)
     // {
     //      printf(" ");
     // }
     // printf("*");
     // printf("\n");
     // printf("*");
     // for (space = 0; space < 2; space++)
     // {
     //      printf(" ");
     // }
     // printf("*");
     // printf("\n");
     // printf("*");
     // printf(" ");
     // printf("*");
}