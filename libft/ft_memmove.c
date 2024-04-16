/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:52:53 by kryochik          #+#    #+#             */
/*   Updated: 2024/04/16 01:32:08 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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

	s = src;
	d = dst;
	if (dst == NULL || src == NULL)
		return (NULL);
	if (d < s)
		return (ori_front(len, d, s));
	else
		return (ori_back(len, d, s));
}

// int	main(void)
// {
// 	char buffer[20] = "HelloWorld";

// 	printf("befor:%s\n", buffer);
// 	ft_memmove(buffer + 5, buffer, 11);
// 	printf("after:%s\n", buffer);

// 	return (0);
// }