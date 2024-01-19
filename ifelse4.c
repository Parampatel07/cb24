// Write a programe to findout largest triangle out of given 2 triangle height and base 
#include<stdio.h>
void main()
{
     int height1 = 0 ;
     int base1 = 0 ;

     int height2 = 0 ;
     int base2 = 0 ;

     float t1 = 0;
     float t2 = 0;

     printf("Enter value of height 1 ");
     scanf("%d",&height1);
     printf("Enter value of base 1 ");
     scanf("%d",&base1);
     printf("Enter value of height 2 ");
     scanf("%d",&height2);
     printf("Enter value of base 2 ");
     scanf("%d",&base2);     

     t1 = height1 * base1 / 2 ;
     t2 = height2 * base2 / 2 ;

     if( t1 > t2 )
     {
          printf("Triangle 1 is greater ");
     }
     else
     {
          printf("Triangle 2 is greater ");
     }

     printf("\nGoodbyee...");
}