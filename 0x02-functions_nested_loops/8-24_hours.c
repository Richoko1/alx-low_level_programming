#include "main.h"

/**
* jack_bauer - prints every minute of the day
*
* Return: Always 0.
*/

void jack_bauer(void)

{
int l;
int m;

for (l = 0; l <= 23; l++)
{
for (m = 0; m <= 59; m++)
{
_putchar (l / 10 + '0');
_putchar (l % 10 + '0');
_putchar (':');
_putchar (m / 10 + '0');
_putchar (m % 10 + '0');
_putchar ('\n');
}
}
}
