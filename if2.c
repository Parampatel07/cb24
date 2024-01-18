// Write a programe to findout wether the user given alphabet is 'a' or not
#include <stdio.h>
void main()
{
     char letter = ' ';

     printf("Enter value of letter ");
     scanf("%c", &letter);

     // check
     if (letter == 'a')
     {
          printf("It is first letter of alphabets ");
     }

     printf("\nGoodbyee...");
}