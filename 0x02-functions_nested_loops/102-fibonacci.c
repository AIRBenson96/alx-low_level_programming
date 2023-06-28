#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */
int main(void)
{
int count = 50;
long int fib1 = 1, fib2 = 2;
int i;

printf("%ld, %ld", fib1, fib2);

for (i = 3; i <= count; i++)
{
long int nextFib = fib1 + fib2;
printf(", %ld", nextFib);

fib1 = fib2;
fib2 = nextFib;
}

printf("\n");

return (0);
}
