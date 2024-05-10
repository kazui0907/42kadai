/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazui <kazui@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:56:47 by kryochik          #+#    #+#             */
/*   Updated: 2024/05/11 01:31:22 by kazui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"

int print_hex(unsigned long long num, char format, int *printed)
{
    char *base;

    if (format == 'x')
        base = "0123456789abcdef";
    else
        base = "0123456789ABCDEF";

    if (num >= 16)
    {
        if (print_hex(num / 16, format, printed) == -1)
            return (-1);
    }
    if (print_char(base[num % 16], printed) == -1)
        return (-1);

    return (*printed);
}

