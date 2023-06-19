#include <stdio.h>


/**
 * main -  A program that prints the size af various computer types
 * Return: 0 (Success)
 */

int main(void)
{

	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s) \n", sizeof(long int));
	printf("Size of a long long int: %lu 8 byte(s)\n", (sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));

return (0);
}
