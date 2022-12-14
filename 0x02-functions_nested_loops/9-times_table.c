#include "main.h"
/**
* times_table - print the 9 times table
* Return: 0 (Always Success)
*/
void times_table(void)
{
int l, m, n;

for (l = 0; l <= 9; l++)
{
for (m = 0; m <= 9; m++)
{
n = l * m;
if ((n / 10) == 0)
{
if (m == 0)
{
_putchar('0');
}

if (m != 0)
{
_putchar(' ');
_putchar((n % 10) + '0');
}
if (m < 9)
{
_putchar(',');
_putchar(' ');
}
}
else
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
if (m < 9)
{
_putchar(',');
_putchar(' ');
}
}
}
      
_putchar('\n');
}
}
