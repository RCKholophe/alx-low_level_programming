#include "main.h"
/**
 * print_array - a function that prints an elements of an array
 * @a: array name
 * @n: is the number of elements of the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		print("%d, ", a[i]);
	}
		if (i == (n - 1))
	{
			print("%d", a[n - 1]);
	}
			printf("\n");
}
