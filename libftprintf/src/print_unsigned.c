/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:57:04 by kryochik          #+#    #+#             */
/*   Updated: 2024/05/09 18:37:47 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"

void	print_unsigned(unsigned int n, int *printed)
{
	if (n > 9)
		print_unsigned(n / 10, printed);
	print_char(n % 10 + '0', printed);
}
