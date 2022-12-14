#include <stdio.h>
/**
 * main - main block
 * Description: compute and print even number < 4,000,000
 * write a program that finds and prints the sum of the even-valued terms,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	int a = 0, b = 1, next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = a + b;
		a = b;
		b = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%i\n", sum);
	return (0);
}
