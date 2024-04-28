/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 03:22:01 by kryochik          #+#    #+#             */
/*   Updated: 2024/03/11 15:21:21 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (src);
}
// int	main(void)
// {
// 	char src[7] = "abcdefg";
// 	char dest[7];
// 	int i;

// 	ft_strncpy(dest,src,7);

// 	for(i=0;i<7;++i)
// 	{
//     	printf("%c\n", dest[i]);
// 	}

// 	return (0);

// }