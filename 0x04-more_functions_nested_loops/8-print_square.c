#include "main.h"
/**
*print_square - function that prints a square
*@size: size of both width and length
*Return: square made of '#'
*/

void print_square(int size)

{
int inc1, inc2;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (inc1 = 0; inc1 < size; inc1++)
{
_putchar('#');
for (inc2 = 0; inc2 < (size - 1); inc2++)
{
_putchar('#');
}
_putchar('\n');
}
}
}	
