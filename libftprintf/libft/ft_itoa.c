/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:52:31 by kryochik          #+#    #+#             */
/*   Updated: 2024/04/28 23:37:14 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static char	*ori_num(int len, long num)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	else if (num == 0)
	{
		str[0] = '0';
		return (str);
	}
	while (num != 0 && len-- > 0)
	{
		str[len] = (char)((num % 10) + '0');
		num /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	long	num;
	long	temp;
	int		len;

	num = n;
	temp = num;
	len = 0;
	if (num < 0)
		temp = -temp;
	if (num <= 0)
		len = 1;
	while (temp != 0)
	{
		len++;
		temp /= 10;
	}
	return (ori_num(len, num));
}

// int	main(void)
// {
// 	int numbers[] = {1234, -1234, 0, 2147483647, -2147483648};
// 	int size = sizeof(numbers) / sizeof(numbers[0]);

// 	for (int i = 0; i < size; i++)
// 	{
// 		char *result = ft_itoa(numbers[i]);
// 		if (result != NULL)
// 		{
// 			printf("Number: %d, String: %s\n", numbers[i], result);
// 			free(result);
// 		}
// 		else
// 		{
// 			printf("Failed to allocate memory.\n");
// 		}
// 	}
// 	return (0);
// }