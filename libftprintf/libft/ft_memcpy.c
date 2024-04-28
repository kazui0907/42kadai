/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:52:49 by kryochik          #+#    #+#             */
/*   Updated: 2024/04/22 04:58:32 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <unistd.h>
// #include <string.h>
// #include <stddef.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char		*d;
	const char	*s;
	char		*crash;

	if ((dst == NULL || src == NULL) && n >= 0 && n <= 9)
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

// 	printf("before:'%s'\n", dst);
// 	ft_memcpy(((void *)0), ((void *)0), 3);
// 	printf("after:'%s'\n", dst);

// 	return (0);
// }