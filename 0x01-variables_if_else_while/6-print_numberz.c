#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints all single digit numbers of base 10 starting from 0'
 * Return: Always 0
 */
int main(void)
{
int singleDigitNumbers;

for (singleDigitNumbers = 0; singleDigitNumbers <= 9; singleDigitNumbers++)
{
putchar (singleDigitNumbers + 48);
}
putchar ('\n');
return (0);
}
