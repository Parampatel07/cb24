// Write a prgorame to findout wether the given shape is square or not using height and width
#include <stdio.h>
void main()
{
     float height = 0;
     float width = 0;

     printf("Enter value of height ");
     scanf("%f", &height);
     printf("Enter value of width ");
     scanf("%f", &width);

     //check 
     if ( height == width )
     {
          printf("The given shape is square ");
     }

     printf("\nGoodbyee...");
}