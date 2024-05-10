/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazui <kazui@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:56:37 by kryochik          #+#    #+#             */
/*   Updated: 2024/05/10 02:22:09 by kazui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int		ft_printf(const char *format, ...);
void	print_char(int c, int *printed);
void	print_string(char *str, int *printed);
void    print_number(int n, int *printed);
void	print_unsigned(unsigned int n, int *printed);
void	print_hex(unsigned long long num, char format, int *printed);
void	print_pointer(void *ptr, int *printed);

#endif