#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
unsigned long int fib1 = 1, fib2 = 2, nextFib;
int count, numPerLine, numbersPrinted;

numPerLine = 10;
numbersPrinted = 2;

printf("%lu, %lu", fib1, fib2);

for (count = 3; count <= 98; count++)
{
nextFib = fib1 + fib2;

if (numbersPrinted % numPerLine != 0)
printf(", %lu", nextFib);
else
printf(",\n%lu", nextFib);

numbersPrinted++;

fib1 = fib2;
fib2 = nextFib;
}

printf("\n");

return (0);
}
