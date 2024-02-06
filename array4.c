// Write a programe to take name as input and print is in reverse
// param => marap
// hello => olleh
#include <stdio.h>
void main()
{
     char name[25];
     int count = 0;
     int flash = 0;

     printf("Enter your name ");
     for (count = 0; count < 25; count++)
     {
          scanf("%c", &name[count]);
          if (name[count] == '\n')
          {
               break;
          }
     }
     printf("%d ", count);

     for( count = count ; count >= 0 ; count--)
     {
          printf("%c", name[count]);
     }
     // printf("%c",name[6]);
     // printf("%c",name[5]);
     // printf("%c",name[4]);
     // printf("%c",name[3]);
     // printf("%c",name[2]);
     // printf("%c",name[1]);
     // printf("%c",name[0]);
}