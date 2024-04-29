/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:52:49 by kryochik          #+#    #+#             */
/*   Updated: 2024/04/23 22:07:49 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <unistd.h>
// #include <string.h>

// #include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	char		*crash;

	if ((dst == NULL || src == NULL) && n == 0)
		return (dst);
	if (dst == NULL && src == NULL)
		return (dst);
	if (dst == NULL || src == NULL)
	{
		crash = NULL;
		*crash = 'c';
	}
	d = (char *)dst;
	s = (const char *)src;
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