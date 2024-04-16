/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:09:47 by kryochik          #+#    #+#             */
/*   Updated: 2024/03/14 02:34:49 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] > s2[i])
			return (1);
		else
			return (-1);
	}
	if (s1[i] != '\0')
		return (1);
	else if (s2[i] != '\0')
		return (-1);
	return (0);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char str1[] = "abcd", str2[] = "bbcd";
// 	char str3[] = "abca", str4[] = "abcdefg",str5[] = "abcd";
// 	int result;
// 	result = ft_strcmp(str1, str2);
// 	printf("ft_strcmp(str1, str2) = %d\n", result);

// 	result = ft_strcmp(str1, str3);
// 	printf("ft_strcmp(str1, str3) = %d\n", result);

// 	result = ft_strcmp(str1, str4);
// 	printf("ft_strcmp(str1, str4) = %d\n", result);

// 	result = ft_strcmp(str1, str5);
// 	printf("ft_strcmp(str1, str5) = %d\n", result);

// 	result = strcmp(str1, str2);
// 	printf("strcmp(str1, str2) = %d\n", result);

// 	result = strcmp(str1, str3);
// 	printf("strcmp(str1, str3) = %d\n", result);

// 	result = strcmp(str1, str4);
// 	printf("strcmp(str1, str4) = %d\n", result);

// 	result = strcmp(str1, str5);
// 	printf("strcmp(str1, str5) = %d\n", result);
// 	return (0);
// }