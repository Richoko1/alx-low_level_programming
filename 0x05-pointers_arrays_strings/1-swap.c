#include <stdio.h>
#include "main.h"

/**
* swap_int - a function that swaps the values of 2 integers.
* @a: first value to be provided
* @b: Second value to be provided
* int c: addressed the swapped value will be sent to
* Return: Always 0 (Success)
*/

void swap_int(int *a, int *b)

{
int c = *a;
*a = *b;
*b = c;
}
