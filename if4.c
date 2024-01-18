// Write a programe to findout wether the given year is millineum year or not
// 1000,2000,3000,4000,5000

#include <stdio.h>
void main()
{
     int year = 0;

     printf("Enter any year ");
     scanf("%d", &year);

     //check
     if ( year % 1000 == 0 )
     {
          printf("It is millineum year ");
     }

     printf("\nGoodbyee...");
}