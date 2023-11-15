#include "main.h"

/**
 * print_bin - prints binary number.
 * @args: parameter.
 * Return: integer
 */
int print_binary(va_list args)
{
	int flag = 0;
	int con = 0;
	int i, a = 1, b;
	unsigned int num = va_args(args, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & num);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			con++;
		}
	}
	if (con == 0)
	{
		con++;
		_putchar('0');
	}
	return (con);
}
