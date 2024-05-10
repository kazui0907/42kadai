/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazui <kazui@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:57:00 by kryochik          #+#    #+#             */
/*   Updated: 2024/05/11 01:39:00 by kazui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"
int print_string(char *str, int *printed)
{
    if (!str) 
		str = "(null)";
    int len;
	len = ft_strlen(str);

    if (write(1, str, len) != len)
        return (-1);
    *printed += len;
    return (len);
}
