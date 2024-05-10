/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazui <kazui@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:57:04 by kryochik          #+#    #+#             */
/*   Updated: 2024/05/11 01:20:19 by kazui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"

int print_unsigned(unsigned int n, int *printed)
{
    if (n > 9)
    {
        if (print_unsigned(n / 10, printed) == -1)
            return (-1);
    }
    if (print_char(n % 10 + '0', printed) == -1)
        return (-1);

    return (*printed);
}

