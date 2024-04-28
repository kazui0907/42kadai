/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:53:40 by kryochik          #+#    #+#             */
/*   Updated: 2024/04/16 18:51:09 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	i;

	if (dstsize == 0)
		return (ft_strlen(src));
	dst_len = 0;
	while (dst[dst_len] != '\0' && dst_len < dstsize)
		dst_len++;
	i = 0;
	while (src[i] != '\0' && (dst_len + i < dstsize - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dst_len < dstsize)
		dst[dst_len + i] = '\0';
	while (src[i] != '\0')
		i++;
	return (dst_len + i);
}

// int	main(void)
// {
// 	char src[] = "world!";
// 	char dst[11] = "Hello, ";

// 	size_t result = ft_strlcat(dst, src, sizeof(dst));
// 	printf("dst: '%s'\n", dst);
// 	printf("Total length: %zu\n", result);

// 	return (0);
// }