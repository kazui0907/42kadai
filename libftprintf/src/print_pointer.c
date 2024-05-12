/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:56:55 by kryochik          #+#    #+#             */
/*   Updated: 2024/05/12 12:34:31 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft2/libft.h"
#include "ft_printf.h"

int	print_pointer(void *ptr, int *printed)
{
	unsigned long	addr;
	int				result;

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
