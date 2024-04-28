/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:59:08 by kryochik          #+#    #+#             */
/*   Updated: 2024/04/15 21:59:09 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_o;
	char		char_c;

	last_o = NULL;
	char_c = (char)c;
	while (*s)
	{
		if (*s == char_c)
		{
			last_o = s;
		}
		s++;
	}
	if (char_c == '\0')
	{
		return ((char *)s);
	}
	return ((char *)last_o);
}

// int main(void)
// {
//     const char *str =  "Hello, world! Welcome to the world of programming.";
//     int char_to_find = 'w';

//     char *result = ft_strrchr(str, char_to_find);
//     if (result != NULL)
//     {
//         printf("Last occurrence of '%c': \"%s\"\n", char_to_find, result);
//     }
//     else
//     {
//         printf("Character '%c' not found in the string.\n", char_to_find);
//     }
//     return (0);
// }