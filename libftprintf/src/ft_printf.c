/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazui <kazui@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:56:27 by kryochik          #+#    #+#             */
/*   Updated: 2024/05/11 01:50:12 by kazui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"
#include <stdio.h>

//パターン２
// void v_format(const char **format, void *ar, int *printed)
// {
// 	char fmt;
	
// 	fmt  = **format;

//     if (fmt  == 'p')
//         print_pointer(ar, printed);
// }

// void u_format(const char **format, unsigned int ar, int *printed)
// {
// 	char fmt;
	
// 	fmt  = **format;

//     if (fmt  == 'u')
//         print_unsigned(ar, printed);
//     else if (fmt  == 'x' || fmt  == 'X')
//         print_hex(ar, fmt , printed);
// }

// void c_format(const char **format, char ar, int *printed)
// {
// 	char fmt;
	
// 	fmt  = **format;

//     if (fmt  == 's')
// 		print_string(&ar, printed);
// }

// void i_format(const char **format, int ar, int *printed)
// {
// 	char fmt;
	
// 	fmt  = **format;

//     if (fmt  == 'c')
//         print_char(ar, printed);
//     else if (fmt  == 'd' || fmt  == 'i')
//         print_number(ar, printed);
// }

//パターン３
// void process_format(const char **format, va_list args, int *printed)
// {
// 	char *format ;
	
//     (*format)++;
// 	*format  = **format;

//     if (*format  == 'c')
//         print_char(va_arg(args, int), printed);
//     else if (*format  == 's')
//         print_string(va_arg(args, char *), printed);
//     else if (*format  == 'd' || *format  == 'i')
//         print_number(va_arg(args, int), printed);
//     else if (*format  == 'u')
//         print_unsigned(va_arg(args, unsigned int), printed);
//     else if (*format  == 'x' || *format  == 'X')
//         print_hex(va_arg(args, unsigned int), *format , printed);
//     else if (*format  == 'p')
//         print_pointer(va_arg(args, void *), printed);
//     else if (*format  == '%')
//         print_char('%', printed);
// }

// パターン１_1
// int	ft_printf(const char *format, ...)
// {
// 	va_list	args;
// 	int		printed;

// 	printed = 0;
// 	va_start(args, format);
// 	while (*format)
// 	{
// 		if (*format == '%')
// 		{
// 			format++; 
// 	    	if (*format  == 'c')
//        			 print_char(va_arg(args, int), &printed);
//     		else if (*format  == 's')
//        	 		print_string(va_arg(args, char *), &printed);
//     		else if (*format  == 'd' || *format  == 'i')
//         		print_number(va_arg(args, int), &printed);
//     		else if (*format  == 'u')
//         		print_unsigned(va_arg(args, unsigned int), &printed);
//     		else if (*format  == 'x' || *format  == 'X')
//         		print_hex(va_arg(args, unsigned int), *format , &printed);
//     		else if (*format  == 'p')
//         		print_pointer(va_arg(args, void *), &printed);
//     		else if (*format  == '%')
//         		print_char('%', &printed);			
// 		}
// 		else
// 			print_char(*format, &printed);
// 		format++;
// 	}
// 	va_end(args);
// 	return (printed);
// }

// パターン１_2※パターン３ベースでva_arg(args, int)を一旦intで受け取って、各々の型にキャストする形はどうか？
int ft_printf(const char *format, ...)
{
    va_list args;
    int printed;
    int result;

	printed = 0;
    va_start(args, format);
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == 'c')
                result = print_char(va_arg(args, int), &printed);
            else if (*format == 's')
                result = print_string(va_arg(args, char*), &printed);
            else if (*format == 'd' || *format == 'i')
                result = print_number(va_arg(args, int), &printed);
            else if (*format == 'u')
                result = print_unsigned(va_arg(args, unsigned int), &printed);
            else if (*format == 'x')
                result = print_hex(va_arg(args, unsigned int), 'x', &printed);
            else if (*format == 'X')
                result = print_hex(va_arg(args, unsigned int), 'X', &printed);
            else if (*format == 'p')
                result = print_pointer(va_arg(args, void*), &printed);
            else if (*format == '%')
                result = print_char('%', &printed);
            else
                result = print_char(*format, &printed);
            if (result == -1) 
			{
                va_end(args);
                return (-1);
            }
        }
        else
        {
            result = print_char(*format, &printed);
            if (result == -1) {
                va_end(args);
                return (-1);
            }
        }
        format++;
    }
    va_end(args);
    return (printed);
}


//パターン２
// int	ft_printf(const char *format, ...)
// {
// 	va_list	args;
// 	int		printed;

// 	printed = 0;
// 	va_start(args, format);
// 	while (*format)
// 	{
// 		if (*format == '%')
// 		{
// 			format++; 
// 	    	if (*format  == 'c' || *format  == 'd' || *format  == 'i')
// 				i_format(&format, va_arg(args, int), &printed);
// 			else if (*format  == 's')
// 				c_format(&format, *va_arg(args, char *), &printed);
// 			else if (*format  == 'u' || *format  == 'x' || *format  == 'X')
// 				u_format(&format, va_arg(args, unsigned int), &printed);
// 			else if (*format  == 'p')
// 				v_format(&format, va_arg(args, void *), &printed);
// 			else if (*format  == '%')
//         		print_char('%', &printed);
// 		}
// 		else
// 			print_char(*format, &printed);
// 		format++;
// 	}
// 	va_end(args);
// 	return (printed);
// }

//パターン３
// int	ft_printf(const char *format, ...)
// {
// 	va_list	args;
// 	int		printed;

// 	printed = 0;
// 	va_start(args, format);
// 	while (*format)
// 	{
// 		if (*format == '%')
// 			process_format(&format, args, &printed);
// 		else
// 		{
// 			print_char(*format, &printed);
// 		}
// 		format++;
// 	}
// 	va_end(args);
// 	return (printed);
// }


// int	main(void)
// {
	// 文字のテスト
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