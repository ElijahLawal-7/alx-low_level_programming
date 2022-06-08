#include <stdio.h>
#include "holberton.h"
/**
 * main - main function
 * Description - Print first 50 fibo numbers
 * Return: void
 */
int main(void)
{
	long cnt, new, aux, i;

	cnt = 0;
	new = 1;
	for (i = 0; i < 50; i++)
	{
		aux = cnt + new;
		cnt = new;
		new = aux;
		printf("%lu", aux);
		if (i == 49)
		{
			putchar('\n');
		}
		else
		{
			printf(", ");
		}
	}

	return (0);
}
