<<<<<<< HEAD
include "main.h"
=======
#include "main.h"
>>>>>>> 55dc0e4f39ec0a9f323df6cda4ea32d0c14e54fb

/**
* print_c - function
* @c: Char
<<<<<<< HEAD
* description: print char
* return: 1, always
=======
* Description: print char
* Return: 1, always
>>>>>>> 55dc0e4f39ec0a9f323df6cda4ea32d0c14e54fb
*/

int print_c(va_list c)
{
	char ch = (char)va_arg(c, int);
<<<<<<< HEAD
	_putchar(ch);
=======
	{
	_putchar(ch);
	}
>>>>>>> 55dc0e4f39ec0a9f323df6cda4ea32d0c14e54fb
	return (1);
}

/**
* print_s - function
* @s: string
<<<<<<< HEAD
* description: prints string
* return: numbers and characters printed
=======
* Description: prints string
* Return: numbers and characters printed
>>>>>>> 55dc0e4f39ec0a9f323df6cda4ea32d0c14e54fb
*/

int print_s(va_list s)
{
<<<<<<< HEAD
int count;
char *str = va_arg(s, char *);
=======
	int count;
	char *str = va_arg(s, char *);
>>>>>>> 55dc0e4f39ec0a9f323df6cda4ea32d0c14e54fb

	if (!str)
	str = "(null)";
	for (count = 0; str[count]; count++)
	{
		_putchar(str[count]);
	}
<<<<<<< HEAD
	return (count);
=======
return (count);
>>>>>>> 55dc0e4f39ec0a9f323df6cda4ea32d0c14e54fb
}

/**
* print_p - function
* @p: arguments
<<<<<<< HEAD
* description: prints percent symbol
* return: characters printed
=======
* Description: prints percent symbol
* Return: characters printed
>>>>>>> 55dc0e4f39ec0a9f323df6cda4ea32d0c14e54fb
*/

int print_p(va_list p)
{
	(void)p;
	_putchar('%');
	return (1);
}
