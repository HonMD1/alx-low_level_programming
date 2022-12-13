#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @n: The number in question.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n

	a = n % 10;

	if (a < 0)
		a = -a;

		_putchar(a + '0');

		return (a);
}

{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
