/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:56:37 by kryochik          #+#    #+#             */
/*   Updated: 2024/05/12 05:58:53 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	print_char(int c, int *printed);
int	print_string(char *str, int *printed);
int	print_number(int n, int *printed);
int	print_unsigned(unsigned int n, int *printed);
int	print_hex(unsigned long long num, char format, int *printed);
int	print_pointer(void *ptr, int *printed);

#endif