// Write a programe to peform sorting in array (ascending order)
#include <stdio.h>

void printArray(int count, int numbers[])
{
     for (count = 0; count < 5; count++)
     {
          printf("\nThe value of number %d is %d ", count + 1, numbers[count]);
     }
}

void main()
{
     int numbers[5];
     int count = 0;
     int flash = 0;
     int temp = 0;
     for (count = 0; count < 5; count++)
     {
          printf("Enter number %d ", count + 1);
          scanf("%d", &numbers[count]);
     }
     printArray(5, numbers);
     for (flash = 0; flash < 5; flash++)
     {
          for (count = flash + 1; count < 5; count++)
          {
               if (numbers[flash] > numbers[count])
               {
                    temp = numbers[flash];
                    numbers[flash] = numbers[count];
                    numbers[count] = temp;
               }
          }
     }
     printf("\n\nTHe value after swap is \n");
     printArray(5, numbers);
     // for (count = 2; count < 5; count++)
     // {
     //      if (numbers[1] > numbers[count])
     //      {
     //           temp = numbers[1];
     //           numbers[1] = numbers[count];
     //           numbers[count] = temp;
     //      }
     // }

     // if (numbers[1] > numbers[3])
     // {
     //      temp = numbers[1];
     //      numbers[1] = numbers[3];
     //      numbers[3] = temp;
     // }
     // if (numbers[1] > numbers[4])
     // {
     //      temp = numbers[1];
     //      numbers[1] = numbers[4];
     //      numbers[4] = temp;
     // }
     // printf("\nThe value of number 1 is %d ", numbers[0]);
     // printf("\nThe value of number 2 is %d ", numbers[1]);
     // if (numbers[0] > numbers[2])
     // {
     //      temp = numbers[0];
     //      numbers[0] = numbers[2];
     //      numbers[2] = temp;
     // }
     // if (numbers[0] > numbers[3])
     // {
     //      temp = numbers[0];
     //      numbers[0] = numbers[3];
     //      numbers[3] = temp;
     // }
     // if (numbers[0] > numbers[4])
     // {
     //      temp = numbers[0];
     //      numbers[0] = numbers[4];
     //      numbers[4] = temp;
     // }

     // printf("The value of number 1 is %d ",numbers[3]);
}