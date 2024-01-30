// Write a programe to print multiplication table of 5
// 5 x 1 = 5
// 5 x 2 = 10
// 5 x 3 = 15
// 5 x 4 = 20
//....
// 5 x 10 = 50
#include <stdio.h>
void main()
{
     int table = 5;
     int answer = 0;
     int number = 1;

     for (number = 1; number <= 10; number++)
     {
          answer = table * number;
          printf("\n%d x %d = %d", table, number, answer);
     }
     // answer = table * number ;
     // printf("\n%d x %d = %d",table,number,answer);
     // number++;
     // answer = table * number ;
     // printf("\n%d x %d = %d",table,number,answer);
     // number++;
     // answer = table * number ;
     // printf("\n%d x %d = %d",table,number,answer);
}