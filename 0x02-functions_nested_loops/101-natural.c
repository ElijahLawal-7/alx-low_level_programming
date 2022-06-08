#include <stdio.h>
/**
 * main - main function
 * Return: void
 */
int main(void)
{
	int i, x;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			x += i;
		}
	}
	printf("%d\n", x);
	return (0);
}
