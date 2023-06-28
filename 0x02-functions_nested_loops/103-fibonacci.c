#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 * Return: 0
 */

int main(void)
{
int limit = 4000000;
long int fib1 = 1, fib2 = 2;
long int sum = 0;
long int nextFib;

while (fib1 <= limit)
{
if (fib1 % 2 == 0)
{
sum += fib1;
}

nextFib = fib1 + fib2;
fib1 = fib2;
fib2 = nextFib;
}

printf("%ld\n", sum);

return (0);
}
