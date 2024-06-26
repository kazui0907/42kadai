/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:47:05 by kryochik          #+#    #+#             */
/*   Updated: 2024/05/09 11:15:20 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ori_process_digits(const char **str, int sign)
{
	long int	result;
	long int	check;

	result = 0;
	while (**str && **str >= '0' && **str <= '9')
	{
		check = result;
		result = result * 10 + sign * (**str - '0');
		if (result > check && sign < 0)
			return (0);
		if (result < check && sign > 0)
			return (-1);
		(*str)++;
	}
	return (result);
}

int	ft_atoi(const char *str)
{
	int	sign;

	sign = 1;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v'
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
	return (ori_process_digits(&str, sign));
}

// int	main(void)
// {
// 	char	*test1;
// 	char	*test2;
// 	char	*test3;
// 	char	*test4;
// 	char	*test5;
// 	char	*test6;

// 	test1 = "9223372036854775806";
// 	test2 = "9223372036854775806";
// 	test3 = "2147483647";
// 	test4 = "2147483647";
// 	test5 = "2147483648";
// 	test6 = "2147483648";
// 	printf("resultult for '%s': %d\n", test1, ft_atoi(test1));
// 	printf("resultult for '%s': %d\n", test2, atoi(test2));
// 	printf("resultult for '%s': %d\n", test3, ft_atoi(test3));
// 	printf("resultult for '%s': %d\n", test4, atoi(test4));
// 	printf("resultult for '%s': %d\n", test5, ft_atoi(test5));
// 	printf("resultult for '%s': %d\n", test6, atoi(test6));
// 	return (0);
// }
