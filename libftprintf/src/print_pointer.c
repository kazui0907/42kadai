/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazui <kazui@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:56:55 by kryochik          #+#    #+#             */
/*   Updated: 2024/05/11 01:38:19 by kazui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"

int print_pointer(void *ptr, int *printed)
{
    unsigned long addr;
    int result;

    addr = (unsigned long)ptr;
    result = print_string("0x", printed);
    if (result == -1)
        return (-1); 
    if (!ptr)
	{
        result = print_string("0", printed);
        if (result == -1)
            return (-1);
    } 
	else 
	{
        result = print_hex(addr, 'x', printed);
        if (result == -1) 
            return (-1);
    }
    return (*printed);
}

