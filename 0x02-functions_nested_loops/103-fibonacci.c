#include <stdio.h>
/**
 * main - main function
 * Description: prints the sum of the even-valued terms
 * Return: void
 */
int main(void)
{
	long cnt = 0;
	long new = 1;
	long aux;
	long i;
	long sum = 0;

	for (i = 0; i < 50; i++)
	{
		aux = cnt + new;
		cnt = new;
		new = aux;
		if (aux % 2 == 0 && aux < 4000000)
		{
			sum += aux;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
