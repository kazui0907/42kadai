/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:47:05 by kryochik          #+#    #+#             */
/*   Updated: 2024/04/21 23:38:44 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_atoi(const char *str)
{
	long int	result;
	long int	check;
	int				sign;

	result = 0;
	sign = 1;
	while(*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v'
		|| *str == '\f' || *str == '\r')
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		check = result;
		result = result * 10 + sign * (*str - '0');
		if (result > check && sign < 0)
			return (0);
		if (result < check && sign > 0)
			return (-1);
		str++;
	}
	return (result);
}

// int main (void)
// {
//     char *test1 = "9223372036854775806";
//     char *test2 = "9223372036854775806";
//     char *test3 = "2147483647";
// 	char *test4 = "2147483647";
//     char *test5 = "2147483648";
// 	char *test6 = "2147483648";

//     printf("resultult for '%s': %d\n", test1, ft_atoi(test1));
//     printf("resultult for '%s': %d\n", test2, atoi(test2));
//     printf("resultult for '%s': %d\n", test3, ft_atoi(test3));
//     printf("resultult for '%s': %d\n", test4, atoi(test4));
//     printf("resultult for '%s': %d\n", test5, ft_atoi(test5));
//     printf("resultult for '%s': %d\n", test6, atoi(test6));
// 	return (0);
// }
