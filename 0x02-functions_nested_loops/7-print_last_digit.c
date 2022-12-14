#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int dd = n % 10;

	if (dd < 0)
		dd *= -1;

	_putchar(dd + '0');

	return (0);
}
