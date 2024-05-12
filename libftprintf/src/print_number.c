/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:56:52 by kryochik          #+#    #+#             */
/*   Updated: 2024/05/12 12:34:23 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft2/libft.h"
#include "ft_printf.h"
#include <limits.h>

int	print_number(int n, int *printed)
{
	if (n == INT_MIN)
	{
		if (print_string("-2147483648", printed) == -1)
			return (-1);
		return (*printed);
	}
	if (n < 0)
	{
		if (print_char('-', printed) == -1)
			return (-1);
		n = -n;
	}
	if (print_unsigned((unsigned int)n, printed) == -1)
		return (-1);
	return (*printed);
}
