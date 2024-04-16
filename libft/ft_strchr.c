/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:53:24 by kryochik          #+#    #+#             */
/*   Updated: 2024/04/15 21:53:25 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}

// int main(void)
// {
//     const char *text = "Hello, world!";
//     char target = '\0';
//     char *result;

//     result = ft_strchr(text, target);
//     if (result != NULL)
//     {
//         printf("'%c' found: %s\n", target, result);
//     }
//     else
//     {
//         printf("'%c' not found\n", target);
//     }
//     return (0);
// }