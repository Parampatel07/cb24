// Write a programe to findout wether the user given alphabet is vowel or not
// a , e , i , o , u
#include <stdio.h>
void main()
{
     char letter = ' ';

     printf("Enter value of letter ");
     scanf("%c", &letter); 

     if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
     {
          printf("It is vowel ");
     }
     else
     {
          printf("It is consonent ");
     }
}