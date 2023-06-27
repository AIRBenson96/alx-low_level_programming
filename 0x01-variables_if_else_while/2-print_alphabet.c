#include <stdio.h>
/**
 * main - Entry
 * Description: 'Print alphabets in the lowercase'
 * Return: Always 0
 */
int main(void)
{
int letter = 97;

while (letter <= 122)
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
