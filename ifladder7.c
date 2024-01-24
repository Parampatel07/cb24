// January - 31 days
// February - 28 days in a common year and 29 days in leap years
// March - 31 days
// April - 30 days
// May - 31 days
// June - 30 days
// July - 31 days
// August - 31 days
// September - 30 days
// October - 31 days
// November - 30 days
// December - 31 days
// Write a programe to findout how many days a given month without else if && ||
#include <stdio.h>
void main()
{
     int month = 0;

     printf("Enter value of month ");
     scanf("%d", &month);

     if (month > 0)
     {
          if (month <= 12)
          {
               if (month <= 7)
               {
                    if (month == 2)
                    {
                         printf("This month has 28 or 29 days ");
                    }
                    else
                    {
                         if (month % 2 == 0)
                         {
                              // even
                              printf("This month has 30 days ");
                         }
                         else
                         {
                              // odd
                              printf("This month has 31 days ");
                         }
                    }
               }
               else
               {
                    if (month % 2 == 0)
                    {
                         // even
                         printf("This month has 31 days ");
                    }
                    else
                    {
                         // odd
                         printf("This month has 30 days ");
                    }
               }
          }
          else
          {
               printf("Invalid month ");
          }
     }
     else
     {
          printf("Invalid month ");
     }

     printf("\nGoodbyee..");
}