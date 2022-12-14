#include <stdio.h>
/**
 * main - main block
 * Description: compute and print the sum of all the multiples of 3 or
 * program that prints the first 50 Fibonacci numbers, starting with 1
 * and 2, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long int a = 0, b = 1, next;

	while (i < 50)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (i < 49)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
