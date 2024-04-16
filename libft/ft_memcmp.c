/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:52:44 by kryochik          #+#    #+#             */
/*   Updated: 2024/04/15 21:52:45 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (n > 0)
	{
		if (*p1 != *p2)
		{
			return (*p1 - *p2);
		}
		p1++;
		p2++;
		n--;
	}
	return (0);
}

// int main(void)
// {
//     char str1[] = "Hello, world!";
//     char str2[] = "Hello, world!";
//     char str3[] = "Hallo, world!";

//     printf("ft_memcmp:str1/str2: %d\n", ft_memcmp(str1, str2,12));
//     printf("ft_memcmp:str1/str3: %d\n", ft_memcmp(str1, str3,12));
//     printf("memcmp:str1/str2: %d\n", memcmp(str1, str2,12));
//     printf("memcmp:str1/str3: %d\n", memcmp(str1, str3,12));
//     return (0);
// }