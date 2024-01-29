// Write a programe to print Inverted Hollow pyramid
// https://i1.faceprep.in/fp/articles/img/46684_1580817324.png
#include<stdio.h>
void main()
{
     int count = 0 ;
     int flash = 0 ;
     printf("Enter size of triangle ");
     scanf("%d",&flash);
     while(flash > 0)
     {
          while (count < flash)
          {
               printf("*");
               count = count + 1;
          }
          printf("\n");
          count = 0;
          flash = flash - 1 ; 
     }
     // while (count < 5)
     // {
     //      printf("*");
     //      count = count + 1;
     // }
     // printf("\n");
     // count = 0;
     // while (count < 4)
     // {
     //      printf("*");
     //      count = count + 1;
     // }
     // printf("\n");
     // count = 0;
     // while (count < 3)
     // {
     //      printf("*");
     //      count = count + 1;
     // }
     // printf("\n");
     // count = 0 ;
     // while(count < 2)
     // {
     //      printf("*");
     //      count = count + 1 ;
     // }
}