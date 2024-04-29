/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_copy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 03:16:56 by kryochik          #+#    #+#             */
/*   Updated: 2024/04/29 12:45:35 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// #include "../libft/libft.h"
// #include <stdarg.h>

// static void	print_char(int c)
// {
// 	ft_putchar_fd(c, 1);
// }

// static void	print_string(char *str)
// {
// 	if (!str)
// 		str = "NULL";
// 	ft_putstr_fd(str, 1);
// }

// static void	print_number(int n)
// {
// 	ft_putnbr_fd(n, 1);
// }

// static void	print_unsigned(unsigned int n)
// {
// 	if (n > 9)
// 		print_unsigned(n / 10);
// 	print_char(n % 10 + '0');
// }

// static void	print_hex(unsigned int num, char format)
// {
// 	char	*base;

// 	if (format == 'x')
// 		base = "0123456789abcdef";
// 	else
// 		base = "0123456789ABCDEF";
// 	if (num >= 16)
// 		print_hex(num / 16, format);
// 	print_char(base[num % 16]);
// }

// static void	print_pointer(void *ptr)
// {
// 	unsigned long	addr;

// 	addr = (unsigned long)ptr;
// 	print_string("0x7ffe");
// 	if (!ptr)
// 		print_string("0");
// 	else
// 		print_hex(addr, 'x');
// }

void	handle_format(char format, va_list args, int *printed)
{
	char	c;
	char	*s;

	if (*format == 'c')
	{
		c = (char)va_arg(args, int);
		ft_putchar_fd(c, 1);
	}
	else if (*format == 's')
	{
		s = va_arg(args, char *);
		if (!s)
			s = "(null)";
		ft_putstr_fd(s, 1);
		*printed += ft_strlen(s) - 1;
	}
	else if (format == 'p' || format == 'x' || format == 'X' || format == 'u'
		|| format == 'd' || format == 'i')
		print_hex(va_arg(args, unsigned long), format, printed);
}
void	print_hex(unsigned long num)

	int ft_printf(const char *format, ...)
{
	va_list	args;
	int		printed;

	printed = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
				ft_putchar_fd('%', 1);
			else
				handle_format(*format, args, &printed);
		}
		else
			ft_putchar_fd(*format, 1);
		printed++;
		format++;
	}
	va_end(args);
	return (printed);
}

// int	main(void)
// {
// 	// 文字のテスト
// 	ft_printf("Test character: %c\n", 'A');
// 	printf("printf character: %c\n", 'A');

// 	// 文字列のテスト
// 	ft_printf("Test string: %s\n", "Hello, world!");
// 	printf("printf string: %s\n", "Hello, world!");

// 	// 整数と整数の負の値のテスト
// 	ft_printf("Test integer: %d\n", 123);
// 	printf("printf integer: %d\n", 123);
// 	ft_printf("Test negative integer: %i\n", -123);
// 	printf("printf negative integer: %i\n", -123);

// 	// 符号なし整数のテスト
// 	ft_printf("Test unsigned integer: %u\n", 150);
// 	printf("printf unsigned integer: %u\n", 150);

// 	// 16進数（小文字と大文字）のテスト
// 	ft_printf("Test hexadecimal (lowercase): %x\n", 255);
// 	printf("printf hexadecimal (lowercase): %x\n", 255);
// 	ft_printf("Test hexadecimal (uppercase): %X\n", 255);
// 	printf("printf hexadecimal (uppercase): %X\n", 255);

// 	// ポインタのアドレスのテスト
// 	int num = 42;
// 	ft_printf("Test pointer: %p\n", &num);
// 	printf("printf pointer: %p\n", &num);

// 	// パーセント記号のリテラルのテスト
// 	ft_printf("Test 100%% complete\n");
// 	printf("printf 100%% complete\n");

// 	return (0);
// }

#include "libft.h"
#include <stdarg.h>

static void	print_char(int c)
{
	ft_putchar_fd(c, 1);
}

static void	print_string(char *str)
{
	if (!str)
		str = "(null)";
	ft_putstr_fd(str, 1);
}

static void	print_number(int n)
{
	ft_putnbr_fd(n, 1);
}

static void	print_unsigned(unsigned int n)
{
	if (n > 9)
		print_unsigned(n / 10);
	print_char(n % 10 + '0');
}

static void	print_hex(unsigned int num, char format)
{
	char	*base;

	base = (format == 'x') ? "0123456789abcdef" : "0123456789ABCDEF";
	if (num >= 16)
		print_hex(num / 16, format);
	print_char(base[num % 16]);
}

static void	print_pointer(void *ptr)
{
	unsigned long	addr;

	addr = (unsigned long)ptr;
	print_string("0x");
	if (!ptr)
		print_string("0");
	else
		print_hex(addr, 'x');
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		printed;
	char	*s;

	printed = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				print_char(va_arg(args, int));
				printed++;
			}
			else if (*format == 's')
			{
				s = va_arg(args, char *);
				print_string(s);
				printed += ft_strlen(s);
			}
			else if (*format == 'p')
			{
				print_pointer(va_arg(args, void *));
				printed += 14; // Approximate pointer length
			}
			else if (*format == 'd' || *format == 'i')
			{
				print_number(va_arg(args, int));
				printed += 11; // Approximate int length
			}
			else if (*format == 'u')
			{
				print_unsigned(va_arg(args, unsigned int));
				printed += 10; // Approximate unsigned int length
			}
			else if (*format == 'x' || *format == 'X')
			{
				print_hex(va_arg(args, unsigned int), *format);
				printed += 8; // Approximate hex length
			}
			else if (*format == '%')
			{
				print_char('%');
				printed++;
			}
		}
		else
		{
			print_char(*format);
			printed++;
		}
		format++;
	}
	va_end(args);
	return (printed);
}
