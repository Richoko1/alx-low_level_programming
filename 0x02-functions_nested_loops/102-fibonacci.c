#include <stdio.h>

/**
* main - something
* Return: something
*/

int main(void)

{
long int l, m, n, o;

m = 1;
n = 2;

for (l = 1; l <= 50; ++l)
{
if (m != 20365011074)
{
printf("%ld, ", m);
}

else
{
printf("%ld\n", m);
}

o = m + n;
m = n;
n = o;
}

return (0);
}
