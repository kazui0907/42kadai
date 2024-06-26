/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:52:53 by kryochik          #+#    #+#             */
/*   Updated: 2024/05/09 11:03:57 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ori_front(size_t len, unsigned char *d, unsigned const char *s)
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

static void	*ori_back(size_t len, unsigned char *d, unsigned const char *s)
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
	unsigned char		*d;
	unsigned const char	*s;

	if (dst == NULL && src == NULL)
	{
		if (len == 0)
			return (dst);
		else
			return (NULL);
	}
	s = (unsigned const char *)src;
	d = (unsigned char *)dst;
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