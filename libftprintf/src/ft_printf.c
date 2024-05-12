/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:56:27 by kryochik          #+#    #+#             */
/*   Updated: 2024/05/12 19:02:08 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft2/libft.h"
#include "ft_printf.h"
#include <stdio.h>

static int	process_format(const char **format, va_list args, int *printed)
{
	char	fmt;
	int		result;

	result = 0;
	(*format)++;
	fmt = *(*format);
	if (fmt == 'c')
		result = print_char(va_arg(args, int), printed);
	else if (fmt == 's')
		result = print_string(va_arg(args, char *), printed);
	else if (fmt == 'd' || fmt == 'i')
		result = print_number(va_arg(args, int), printed);
	else if (fmt == 'u')
		result = print_unsigned(va_arg(args, unsigned int), printed);
	else if (fmt == 'x' || fmt == 'X')
		result = print_hex(va_arg(args, unsigned int), fmt, printed);
	else if (fmt == 'p')
		result = print_pointer(va_arg(args, void *), printed);
	else if (fmt == '%')
		result = print_char('%', printed);
	return (result);
}

//ポインタのポインタを止める
int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		printed;
	int		result;

	printed = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
			result = process_format(&format, args, &printed);
		else
		{
			result = print_char(*format, &printed);
		}
		if (result == -1)
		{
			va_end(args);
			return (-1);
		}
		format++;
	}
	va_end(args);
	return (printed);
}

// int	main(void)
// {
// 	// 文字のテスト
// 	ft_printf("Test character: %c %c %c\n", '0', 0, '1');
// 	printf("printf character: %c %c %c\n", '0', 0, '1');

// 	// 文字列のテスト
// 	// printf(" NULL %s NULL \n", NULL);
// 	ft_printf(" NULL %s NULL \n", NULL);

// 	// 整数と整数の負の値のテスト
// ft_printf("Test integer: %d\n", -1);
// printf("printf integer: %d\n", -1);
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
// 	// int num = 42;

// 	ft_printf("Test pointer: %p\n", "");
// 	printf("printf pointer: %p\n", "");

// 	// パーセント記号のリテラルのテスト
// 	ft_printf("Test 100%% complete\n");
// 	printf("printf 100%% complete\n");

// 	return (0);
// }