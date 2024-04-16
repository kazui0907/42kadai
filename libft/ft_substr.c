/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:59:19 by kryochik          #+#    #+#             */
/*   Updated: 2024/04/16 18:59:34 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	substr_len;
	char	*substr;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	substr_len = ft_strlen(s) - start;
	if (substr_len > len)
		substr_len = len;
	substr = (char *)malloc(substr_len + 1);
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (i < substr_len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// int	main(void)
// {
// 	char *s = "Hello World";
// 	unsigned int start = 4;
// 	size_t len = 9;

// 	char *result = ft_substr(s, start, len);
// 	if (result != NULL)
// 	{
// 		printf("'%s'\n", result);
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Failed to allocate memory.\n");
// 	}
// 	return (0);
// }