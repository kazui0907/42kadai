/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:56:52 by kryochik          #+#    #+#             */
/*   Updated: 2024/05/09 18:35:41 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"

void	print_number(int n, int *printed)
{
	int	len;
	int	temp;

	len = 0;
	temp = n;
	if (n == 0)
	{
		print_char('0', printed);
		return ;
	}
	if (n < 0)
	{
		print_char('-', printed);
		temp = -temp;
	}
	while (temp != 0)
	{
		temp /= 10;
		len++;
	}
	for (int i = 0; i < len; i++)
	{
		ft_putchar_fd('0' + (n / (int)pow(10, len - i - 1) % 10), 1);
		(*printed)++;
	}
}
