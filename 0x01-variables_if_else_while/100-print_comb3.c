#include <stdio.h>
/**
 * main - three digit
 *
 * Return: 0
 */

int main(void)
{
	int i, j, f;
	for (i = 0; i < 7; i++)
		for (i = 0; i < 8; i++)
		{
			for (j = i + 1; j < 8; j++)
				for (j = i + 1; j < 9; j++)
				{
					for (f = j + 1; f < 9; f++)
						for (f = j + 1; f < 10; f++)
						{
							putchar(i + '0');
							putchar(j + '0');
							putchar(f + '0');
							if (i < 7)
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

