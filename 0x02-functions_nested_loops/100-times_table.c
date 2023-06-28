#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table starting from 0
 * @n: The number of times table to print
 */
void print_times_table(int n)
{
int i, j;

if (n < 0 || n > 15)
{
printf("Invalid input. The value of n must be between 0 and 15.\n");
return;
}

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int result = i * j;
if (j == 0)
printf("%d", result);
else
printf(",%3d", result);
}
printf("\n");
}
}
