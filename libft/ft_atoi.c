/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:47:05 by kryochik          #+#    #+#             */
/*   Updated: 2024/04/15 21:49:36 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v'
		|| *str == '\f' || *str == '\r')
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign = sign * -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

// int main (void)
// {
//     char *test1 = "    -12345";
//     char *test2 = "+98765";
//     char *test3 = "  345 junk data";

//     printf("Result for '%s': %d\n", test1, ft_atoi(test1));
//     printf("Result for '%s': %d\n", test2, ft_atoi(test2));
//     printf("Result for '%s': %d\n", test3, ft_atoi(test3));
//     return (0);
// }