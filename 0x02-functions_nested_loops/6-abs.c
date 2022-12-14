#include "main.h"

/**
* _abs - computes the absolute value of an integer
* @r: THe int to be operated upon
*
* Return: returns an unsigneed int value to calling function
*/

int _abs(int r)
{
if (r > 0)
{
return (r);
}

else
{
r *= -1;
return (r);
}
}
