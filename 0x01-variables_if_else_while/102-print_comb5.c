#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main function of a program
 *
 * Return: always 0
 */

int main(void)
{
int x, z;

for (x = 0; x <= 98; x++)
{
for (z = x + 1; z <= 99; z++)
{
putchar((x / 10) + '0');
putchar((x % 10) + '0');
putchar(' ');
putchar((z / 10) + '0');
putchar((z % 10) + '0');
if (x == 98 && z == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
