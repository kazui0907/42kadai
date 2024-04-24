/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:52:53 by kryochik          #+#    #+#             */
/*   Updated: 2024/04/23 22:18:30 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ori_front(size_t len, char *d, const char *s)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

void	*ori_back(size_t len, char *d, const char *s)
{
	while (len > 0)
	{
		len--;
		d[len] = s[len];
	}
	return (d);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	if (dst == NULL && src == NULL)
	{
		if (len == 0)
			return (dst);
		else
			return (NULL);
	}
	if (dst == NULL || src == NULL)
		abort();
	s = (const char *)src;
	d = (char *)dst;
	if (d < s)
		return (ori_front(len, d, s));
	else
		return (ori_back(len, d, s));
}

// int	main(void)
// {
// 	// char buffer[20] = "HelloWorld";

// 	// printf("befor:%s\n", buffer);
// 	// ft_memmove(buffer + 5, buffer, 11);
// 	printf("after:%s\n", ft_memmove(((void *)0), ((void *)0), 1));

// 	return (0);
// }