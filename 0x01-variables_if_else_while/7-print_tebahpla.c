#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: print all single digit number of base 10
 * starting form 0, followed by a new line
 * Return: 0
 */
int main(void)
{

	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}	
