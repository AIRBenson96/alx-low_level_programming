#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all possible different combinations of three digits
 * Return: Always 0
 */
int main(void)
{
int i, j, k;
for (i = 48; i < 56; i++)
{
for (j = i + 1; j < 56; j++)
{
for (k = j + 1; k < 56; k++)
{
if (k > j && j > i)
{
putchar(i);
putchar(j);
putchar(k);
if (i != 55 || j != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
