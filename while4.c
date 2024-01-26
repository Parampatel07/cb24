// write a programe to print following pattern
// 2, 1, 3, 4, 7, 11, 18, 29, 47, 76, 123 .... 3000
#include <stdio.h>
void main()
{
     int first = 2;
     int second = 1;
     int answer = 0;
     printf("%d ", first);
     printf("%d ", second);
     answer = first + second; // 3

     while (answer <= 2207)
     {
          first = answer; // 3
          printf("%d ", answer);
          answer = answer + second;
          second = answer;
          if (answer < 3000)
          {
               printf("%d ", answer);
               answer = answer + first;
          }
     } // 7
     // first = answer;
     // printf("%d ", answer);
     // answer = answer + second; // 11
     // second = answer;
     // printf("%d ", answer);
     // answer = answer + first;
     // first = answer; // 18
     // printf("%d ", answer);
     // answer = answer + second;
     // printf("%d ", answer);
     // answer = answer + first;
     // printf("%d ", answer);
}