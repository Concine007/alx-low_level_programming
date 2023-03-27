#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 * Return: always 0
 */

int main(void)
{
	char pass[84];
	int index = 0, s = 0, test0, test1;

	srand(time(0));
	while (s < 2772)
	{
		pass[index] = 33 + rand() % 94;
		s += pass[index++];
	}
	pass[index] = '\0';
	if (s != 2772)
	{
		test0 = (s - 2772) / 2;
		test1 = (s - 2772) / 2;
	if ((s - 2772) % 2 != 0)
		test0++;
	for (index = 0; pass[index]; index++)
	{
		if (pass[index] >= (33 + test0))
		{
			pass[index] -= test0;
			break;
		}
	}
	for (index = 0; pass[index]; index++)
	{
		if (pass[index] >= (33 + test1))
		{
			pass[index] -= test1;
			break;
		}
	}
	}
	printf("%s", pass);
	return (0);
}
