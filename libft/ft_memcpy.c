/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:52:49 by kryochik          #+#    #+#             */
/*   Updated: 2024/05/09 11:03:40 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;

	if (dst == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned const char *)src;
	while (n--)
		*d++ = *s++;
	return (dst);
}

// int	main(void)
// {
// 	char src[] = "Hello, world";
// 	char dst[20];

// 	// printf("before:'%s'\n", dst);
// 	ft_memcpy(((void *)0), ((void *)0), 11);
// 	printf("after:'%s'\n", dst);

// 	return (0);
// }