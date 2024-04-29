/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:56:27 by kryochik          #+#    #+#             */
/*   Updated: 2024/04/29 13:56:29 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"
#include <stdio.h>

void	handle_special(char format, va_list args, int *printed)
{
	if (format == 'p')
	{
		print_pointer(va_arg(args, void *));
		(*printed) += 18;
	}
	else if (format == '%')
	{
		print_char('%');
		(*printed)++;
	}
}

void	handle_numeric(char format, va_list args, int *printed)
{
	if (format == 'd' || format == 'i')
	{
		print_number(va_arg(args, int));
		(*printed) += 11;
	}
	else if (format == 'u')
	{
		print_unsigned(va_arg(args, unsigned int));
		(*printed) += 10;
	}
	else if (format == 'x' || format == 'X')
	{
		print_hex(va_arg(args, unsigned int), format);
		(*printed) += 8;
	}
}

void	handle_char_and_string(char format, va_list args, int *printed)
{
	char	*s;

	if (format == 'c')
	{
		print_char(va_arg(args, int));
		(*printed)++;
	}
	else if (format == 's')
	{
		s = va_arg(args, char *);
		print_string(s);
		(*printed) += ft_strlen(s);
	}
}

void	process_format(const char **format, va_list args, int *printed)
{
	(*format)++;
	if (**format == 'c' || **format == 's')
		handle_char_and_string(**format, args, printed);
	else if (**format == 'd' || **format == 'i' || **format == 'u'
		|| **format == 'x' || **format == 'X')
		handle_numeric(**format, args, printed);
	else if (**format == 'p' || **format == '%')
		handle_special(**format, args, printed);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		printed;

	printed = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
			process_format(&format, args, &printed);
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