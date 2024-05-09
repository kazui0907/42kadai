/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:56:37 by kryochik          #+#    #+#             */
/*   Updated: 2024/05/09 17:25:07 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int		ft_printf(const char *format, ...);
void	print_char(int c);
void	print_string(char *str);
void	print_number(int n);
void	print_unsigned(unsigned int n);
void	print_hex(unsigned long long num, char format);
void	print_pointer(void *ptr);

#endif