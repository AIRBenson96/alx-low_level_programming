#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints all the numbers of base 16 in lowercase'
 * Return: Always 0
 */
int main(void)
{
char digit;

for (digit = '0'; digit <= '9'; digit++)
{
putchar(digit);
}

for (digit = 'a'; digit <= 'f'; digit++)
{
putchar(digit);
}

putchar('\n');
return (0);
}
