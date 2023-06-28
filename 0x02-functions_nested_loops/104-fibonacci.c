#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
unsigned long int fib1 = 1, fib2 = 2, nextFib;
int count, numPerLine;

numPerLine = 10;

printf("%lu, %lu", fib1, fib2);

for (count = 3; count <= 98; count++)
{
nextFib = fib1 + fib2;

printf(", %lu", nextFib);

if (count % numPerLine == 0)
printf("\n");

fib1 = fib2;
fib2 = nextFib;
}

printf("\n");

return (0);
}
