// Write a programe to store 3 countries time hours , min.sec and first letter
#include <stdio.h>
#include <stdlib.h>
struct time
{
     int hours;
     float min_sec;
     char letter;
};

void main()
{
     struct time country[3];
     int count = 0;
     for (count = 0; count < 3; count++)
     {
          printf("Enter hours for country %d ", count + 1);
          scanf("%d", &country[count].hours);
          printf("Enter minutes.second for country %d ", count + 1);
          scanf("%f", &country[count].min_sec);
          fflush(stdin);
          printf("Enter first letter for country %d ", count + 1);
          scanf("%c", &country[count].letter);
     }

     for (count = 0; count < 3; count++)
     {
          printf("\nThe hours for country %d = %d ", count + 1, country[count].hours);
          printf("\nThe minutes.second for country %d = %.2f ", count + 1, country[count].min_sec);
          printf("\nThe first letter of country %d = %c ", count + 1, country[count].letter);
     }
     // printf("Enter hours for country 2 ");
     // scanf("%d", &country2.hours);
     // printf("Enter minutes.second for country 2 ");
     // scanf("%f", &country2.min_sec);
     // printf("Enter first letter for country 2 ");
     // fflush(stdin);
     // scanf("%c", &country2.letter);

     // printf("Enter hours for country 3 ");
     // scanf("%d", &country3.hours);
     // printf("Enter minutes.second for country 3 ");
     // scanf("%f", &country3.min_sec);
     // printf("Enter first letter for country 3 ");
     // fflush(stdin);
     // scanf("%c", &country3.letter);
     // printf("\nThe hours for country 2 = %d ", country[1].hours);
     // printf("\nThe minutes.second for country 2 = %.2f", country[1].min_sec);
     // printf("\nThe first letter of country 2 = %c ", country[1].letter);

     // printf("\nThe hours for country 3 = %d ", country[2].hours);
     // printf("\nThe minutes.second for country 3 = %.2f", country[2].min_sec);
     // printf("\nThe first letter of country 3 = %c ", country[2].letter);
}