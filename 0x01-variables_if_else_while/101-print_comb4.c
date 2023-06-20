#include <stdio.h>

int main(void)
{
int i, j;

putchar('0');
putchar('1');
putchar('2');
putchar('3');

for (i = 4; i < 10; i++)
{
putchar(',');
putchar(' ');

for (j = 0; j < i; j++)
{
putchar('0' + j / 1000);
putchar('0' + (j % 1000) / 100);
putchar('0' + (j % 100) / 10);
putchar('0' + j % 10);

if (j < i - 1)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return 0;
}
