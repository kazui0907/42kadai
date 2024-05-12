/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:57:00 by kryochik          #+#    #+#             */
/*   Updated: 2024/05/12 12:34:39 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft2/libft.h"
#include "ft_printf.h"

int	print_string(char *str, int *printed)
{
	int	len;

	if (!str)
		str = "(null)";
	len = ft_strlen(str);
	if (write(1, str, len) != len)
		return (-1);
	*printed += len;
	return (len);
}
