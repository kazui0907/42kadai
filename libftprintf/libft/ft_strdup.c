/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:53:27 by kryochik          #+#    #+#             */
/*   Updated: 2024/04/28 23:37:14 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dst, const char *src)
{
	char	*ptr;
	int		i;

	ptr = dst;
	i = 0;
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (dst);
}

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*copy;

	len = ft_strlen(s1);
	copy = (char *)malloc(len + 1);
	if (copy == NULL)
		return (NULL);
	ft_strcpy(copy, s1);
	return (copy);
}

// int main(void)
// {
//     const char *src = "Hello, world!";
//     char *dst = ft_strdup(src);

//     if(dst != NULL)
//     {
//         printf("Original: %s\n", src);
//         printf("Duplicate: %s\n", dst);
//         free(dst);
//     }
//     else
//     {
//         printf("Failed to allocate memory.\n");
//     }
//     return (0);
// }