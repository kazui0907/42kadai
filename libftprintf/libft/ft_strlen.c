/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:57:59 by kryochik          #+#    #+#             */
/*   Updated: 2024/05/09 15:55:09 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (s == NULL)
	{
		write(1, "Error NULL", 11);
		return (0);
	}
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int main(void)
// {
//     char str[] = "abcdefghijklmn";
//     int i;
//     i = 0;
//     i = ft_strlen(str);

//     printf("%d",i);

//     return(0);
// }