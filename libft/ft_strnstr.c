/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:58:58 by kryochik          #+#    #+#             */
/*   Updated: 2024/04/16 18:52:20 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ori_search(const char *stack, const char *ne, size_t len,
		size_t ne_len)
{
	size_t		i;
	const char	*h;
	const char	*n;

	i = 0;
	while (i <= len - ne_len)
	{
		if (stack[i] == '\0')
			break ;
		h = stack + i;
		n = ne;
		while (*h && *n && *h == *n && (size_t)(h - (stack + i)) < ne_len)
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return ((char *)(stack + i));
		i++;
	}
	return (NULL);
}

char	*ft_strnstr(const char *stack, const char *ne, size_t len)
{
	size_t	ne_len;

	if (*ne == '\0')
		return ((char *)stack);
	ne_len = ft_strlen(ne);
	if (ne_len == 0)
		return ((char *)stack);
	return (ori_search(stack, ne, len, ne_len));
}

// int	main(void)
// {
// 	const char *largestr = "Foo Bar Baz";
// 	const char *smallstr = "Bar";
// 	char *ptr;

// 	ptr = ft_strnstr(largestr, smallstr, 7);
// 	if (ptr)
// 	{
// 		printf("found: %s\n", ptr);
// 	}
// 	else
// 	{
// 		printf("not found\n");
// 	}
// 	return (0);
// }