#include <stdio.h>

/**
 * print_fibonacci - Prints the first n Fibonacci numbers.
 * @n: The number of Fibonacci numbers to print.
 */
void print_fibonacci(int n)
{
unsigned long int current = 1, previous = 0, temp;
int count = 0;

while (count < n)
{
printf("%lu", current);
count++;

if (count < n)
{
printf(", ");
}

temp = current;
current = previous + current;
previous = temp;
}

printf("\n");
}

/**
 * main - Entry point
 * Description: Prints the first 98 Fibonacci numbers.
 * Return: Always 0
 */
int main(void)
{
print_fibonacci(98);

return (0);
}
