// Write a programe to findout wether the given year is millineum year or not 
#include<stdio.h>
void main()
{
     int year = 0 ;

     printf("Enter value of year ");
     scanf("%d",&year);

     if(year % 2 == 0)
     {
          printf("It is millinuem year ");
     }
     else
     {
          printf("It is not millinuem year ");
     }

     printf("\nGoodbyee...");
}