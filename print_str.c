#include "main.h"

/**
 * printf_string - prints a string
 * @args: input arguments
 * Return: length of string
 */

int printf_string(va_list args)
{
	char *str;
	int i, length;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (i = 0 ; i < length ; i++)
			_putchar(str[i]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (i = 0 ; i < length ; i++)
			_putchar(str[i]);
		return (length);
	}
}
