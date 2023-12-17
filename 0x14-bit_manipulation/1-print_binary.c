#include "main.h"

/**
* print_binary-prints as binary string
* @n: the number to print
* Return: void
*/
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, printf = 0;

	while (bit)
	{
	if (n & 1L << --bit)
	{
	_putchar('1');
	}	
	else if (printf)
	_putchar('0');
	}
	if (!printf)
	_putchar('0');
}
