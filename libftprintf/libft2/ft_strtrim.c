/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:59:14 by kryochik          #+#    #+#             */
/*   Updated: 2024/04/28 23:37:14 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*end;
	size_t		len;
	char		*trim;

	if (s1 == NULL || set == NULL)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	end = s1 + ft_strlen(s1);
	while (end > s1 && ft_strchr(set, *(end - 1)))
		end--;
	len = end - s1;
	trim = (char *)malloc(len + 1);
	if (trim == NULL)
		return (NULL);
	ft_strncpy(trim, s1, len);
	trim[len] = '\0';
	return (trim);
}

// int main(void)
// {
//     char const *str = "+++Hello, World!!!";
//     char const *set = "+!Hl";
//     char *trim = ft_strtrim(str, set);
//     if (trim != NULL)
//     {
//         printf("trim: '%s'\n", trim);
//         free(trim);
//     }
//     else
//     {
//         printf("Failed to allocate memory.\n");
//     }
//     return (0);
// }