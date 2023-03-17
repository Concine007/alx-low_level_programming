#include <stdio.h>

/**
 * main - main function of a program
 *
 * Return: always 0
 */

int main(void)
{
	int x;
	int z;

	for (x = 0 ; x < 10 ; x++)
	{
		for (z = 1 ; z < 10 ; z++)
		{
			if (x < z && x != z)
			{
				putchar(x + '0');
				putchar(z + '0');
				if (x + z != 17)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
