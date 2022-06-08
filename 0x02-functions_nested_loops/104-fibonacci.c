#include <stdio.h>
/**
 * main - main function
 * Description: Print 98 first fibo nums
 * Return: void
 */
int main(void)
{
	int i;
	unsigned long cnt, new, aux;
	unsigned long a, b, c, aux2;

	i = 0;
	cnt = 0;
	new = 1;
	for (i = 1; i <= 91; i++)
	{
		aux = cnt + new;
		cnt = new;
		new = aux;
		printf("%lu, ", aux);
	}
	a = cnt % 1000;
	cnt = cnt / 1000;
	b = new % 1000;
	new = new / 1000;
	while (i <= 98)
	{
		aux2 = (a + b) / 1000;
		c = (a + b) - aux2 * 1000;
		aux = (cnt + new) + aux2;
		a = b;
		b = c;
		cnt = new;
		new = aux;
		if (c >= 100)
			printf("%lu%lu", aux, c);
		else
			printf("%lu0%lu", aux, c);
		if (i != 98)
			printf(", ");
		i++;
	}
	putchar('\n');
	return (0);
}
