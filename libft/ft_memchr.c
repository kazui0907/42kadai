/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazui <kazui@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:52:37 by kryochik          #+#    #+#             */
/*   Updated: 2024/04/18 10:11:09 by kazui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	p = s;
	while (n-- > 0)
	{
		if (*p == (unsigned char)c)
		{
			return ((void *)p);
		}
		p++;
	}
	return (NULL);
}

// int main(void)
// {
//     char str[] = "Example string for memchr function";
//     char *result;

//     result = ft_menchr(str, 'o', ft_strlen(str));
//     if(result != NULL)
//     {
//         printf("Found position: %ld\n", result - str);
//         printf("Substring from: %s\n", result);
//     }
//     else
//     {
//         printf("not found within the first %zu bytes.\n", strlen(str));

//     }
//     return (0);
// }