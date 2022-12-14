#include "main.h"

/**
* print_alphabet_x10 - print a - z ten times
*
*/

void print_alphabet_x10(void)

{
int l;
char m;

for (l = 0; l < 10; l++)
{
for (m = 'a'; m <= 'z'; m++)
{
_putchar(m);
}

_putchar('\n');
}

}
