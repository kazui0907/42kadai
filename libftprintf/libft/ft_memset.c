/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:52:59 by kryochik          #+#    #+#             */
/*   Updated: 2024/04/15 21:53:00 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	int				i;

	p = (unsigned char *)b;
	i = 0;
	while (len > 0)
	{
		p[i] = (unsigned char)c;
		i++;
		len--;
	}
	return (b);
}

// int main(void)
// {
//     char buffer[10];
//     size_t i = 0;

//     ft_memset(buffer, 'x', sizeof(buffer));

//     while(i < sizeof(buffer))
//     {
//         printf("%c",buffer[i]);
//         i++;
//     }
//     printf("\n");

//     return (0);
// }