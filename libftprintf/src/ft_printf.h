/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazui <kazui@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:56:37 by kryochik          #+#    #+#             */
/*   Updated: 2024/05/11 01:28:14 by kazui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int     ft_printf(const char *format, ...);
int     print_char(int c, int *printed);
int	    print_string(char *str, int *printed);
int     print_number(int n, int *printed);
int     print_unsigned(unsigned int n, int *printed);
int	    print_hex(unsigned long long num, char format, int *printed);
int	    print_pointer(void *ptr, int *printed);

#endif