/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazui <kazui@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:58:18 by kryochik          #+#    #+#             */
/*   Updated: 2024/04/18 17:37:39 by kazui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int main(void)
// {
//     const char *str1 = "Hello, World!";
//     const char *str2 = "Hello, World?";

//     const char *str3 = "Hello, World!";
//     const char *str4 = "Hello, everyone!";

//     printf("same strings): %d\n", ft_strncmp(str1, str2, 13));
//     printf("different strings): %d\n", ft_strncmp(str1, str2, 12));

//     return (0);
// }