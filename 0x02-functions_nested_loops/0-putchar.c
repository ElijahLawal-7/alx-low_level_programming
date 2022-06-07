#include "main.h"

/**
 * main - check the code for ALX School students.
 *
 * Program that prints Holberton, followed by a new line
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char s[] = "_putchar";
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar(10);

	return (0);

