#include <stdio.h>

int main(void)
{
int i;

putchar('0');
putchar('1');

for (i = 2; i < 10; i++)
{
putchar(',');
putchar(' ');
putchar('0' + i / 10);
putchar('0' + i % 10);
}

putchar('\n');

return 0;
}
