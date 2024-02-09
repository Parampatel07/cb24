// Write a programe to create a calc
// ->Addition
// ->subtraction
// ->Mulitplication
// ->Division
// ->min
// ->max
// ->equality
#include <stdio.h>

int getAddition(int number1, int number2)
{
     int answer = 0;
     answer = number1 + number2;
     return answer;
}

int getSubtraction(int number1, int number2)
{
     int answer = 0;
     answer = number1 - number2;
     return answer;
}

int getMultiplication(int number1, int number2)
{
     return number1 * number2;
}

int getDivision(int number1, int number2)
{
     return number1 / number2;
}

void getMin(int number1, int number2)
{
     if (number1 > number2)
     {
          printf("\nNumber 2 is smaller ");
     }
     else if (number1 < number2)
     {
          printf("\nNumber 1 is smaller ");
     }
     else
     {
          printf("\nBoth are same ");
     }
}

void getMax(int number1, int number2)
{
     if (number1 > number2)
     {
          printf("\nNumber 1 is greater ");
     }
     else if (number2 > number1)
          printf("\nNumber 2 is greater ");
     else
          printf("\nBoth number are same ");
}

void checkEquality(int number1, int number2)
{
     if (number1 == number2)
          printf("\nBoth are same ");
     else
          printf("\nBoth are not same ");
}

void main()
{

     int number1 = 0;
     int number2 = 0;
     int option = 0;
     int answer = 0;
     do
     {
          printf("\nEnter value of number 1 ");
          scanf("%d", &number1);
          printf("\nEnter value of number 2 ");
          scanf("%d", &number2);

          printf("\nEnter 1 for addition ");
          printf("\nEnter 2 for subtraction ");
          printf("\nEnter 3 for multiplication ");
          printf("\nEnter 4 for division ");
          printf("\nEnter 5 for min ");
          printf("\nEnter 6 for max ");
          printf("\nEnter 7 for equality ");
          printf("\nEnter 0 for exit ");
          scanf("%d", &option);

          switch (option)
          {
          case 1:
               // addition
               answer = getAddition(number1, number2);
               printf("\nThe value of answer is %d ", answer);
               break;

          case 2:
               // subtraction
               answer = getSubtraction(number1, number2);
               printf("\nThe value of answer is %d ", answer);
               break;

          case 3:
               answer = getMultiplication(number1, number2);
               printf("\nThe value of answer is %d ", answer);
               break;

          case 4:
               answer = getDivision(number1, number2);
               printf("\nThe value of answer is %d ", answer);
               break;

          case 5:
               getMin(number1, number2);
               break;

          case 6:
               getMax(number1, number2);
               break;

          case 7:
               checkEquality(number1, number2);
               break;
          case 0:
               printf("\nGoodbyee...");
               break;
          default:
               printf("Invalid Option ");
               break;
          }
     } while (option != 0);

     
}