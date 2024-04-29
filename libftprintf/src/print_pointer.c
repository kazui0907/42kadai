/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:56:55 by kryochik          #+#    #+#             */
/*   Updated: 2024/04/29 13:56:56 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"

void	print_pointer(void *ptr)
{
	unsigned long	addr;

	addr = (unsigned long)ptr;
	print_string("0x");
	if (!ptr)
		print_string("0");
	else
		print_hex(addr, 'x');
}
