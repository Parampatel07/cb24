#include <stdio.h>

void printLine(char symbol, int size)
{
     int count = 0;
     printf("\n");
     for (count = 0; count < size; count++)
     {
          printf("%c", symbol);
     }
     printf("\n");
}

void main()
{
     char symbol = ' ';
     int size = 0;
     printf("Enter symbol for line ");
     scanf("%c", &symbol);
     printf("Enter size of line ");
     scanf("%d", &size);

     printLine(symbol, size);
     printf("Param Patel ");
     printLine(symbol, size);
     printf("Hello world");
     printLine(symbol, size);
}