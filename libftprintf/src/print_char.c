/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:56:42 by kryochik          #+#    #+#             */
/*   Updated: 2024/05/12 12:33:32 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft2/libft.h"
#include "ft_printf.h"

int	print_char(int c, int *printed)
{
	if (write(1, &c, 1) != 1)
		return (-1);
	(*printed)++;
	return (1);
}
