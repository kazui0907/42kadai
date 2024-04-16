/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 10:25:02 by kryochik          #+#    #+#             */
/*   Updated: 2024/03/16 23:59:50 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	int_min(int nb)
{
	if (nb < -2147483647)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	int		n;
	char	tmp[11];

	n = 0;
	if (nb < 0)
		nb = int_min(nb);
	while (nb != 0)
	{
		tmp[n] = nb % 10 + '0';
		nb = nb / 10;
		n++;
	}
	while (n >= 0)
	{
		write(1, &tmp[n], 1);
		n--;
	}
}

// int	main(void)
// {
// 	int nb = -2147483648;
// 	ft_putnbr(nb);
// }