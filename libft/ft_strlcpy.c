/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:55:31 by kryochik          #+#    #+#             */
/*   Updated: 2024/05/09 11:07:10 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (dstsize == 0)
	{
		return (src_len);
	}
	i = 0;
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

// int	main(void)
// {
// 	char src[] = "Hello, world!";
// 	char dst[20];
// 	size_t copy = ft_strlcpy(dst, src, sizeof(dst));
// 	printf("Copied '%s' into dst, %zu .\n", dst, copy);
// 	char small_dst[5];
// 	copy = ft_strlcpy(small_dst, src, sizeof(small_dst));
// 	printf("Copied '%s' into small_dst, %zu .\n", small_dst, copy);
// 	return (0);
// }