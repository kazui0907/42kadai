/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:57:00 by kryochik          #+#    #+#             */
/*   Updated: 2024/05/09 18:37:20 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"

void	print_string(char *str, int *printed)
{
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		*printed += 6;
	}
	else
	{
		ft_putstr_fd(str, 1);
		while (*str)
		{
			(*printed)++;
			str++;
		}
	}
}
