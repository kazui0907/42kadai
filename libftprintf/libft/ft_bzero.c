/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:50:56 by kryochik          #+#    #+#             */
/*   Updated: 2024/04/15 21:51:03 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	int				i;

	p = s;
	i = 0;
	while (n > 0)
	{
		p[i] = 0;
		i++;
		n--;
	}
}

// int main(void)
// {
//     char buffer[10] = "HelloWorld";
//     int i = 0;
//     printf("before:%s\n", buffer);
//     ft_bzero(buffer,10);
//     printf("after:");
//     while(i < 10)
//     {
//         printf("%d",buffer[i]);
//         i++;
//     }
//     printf("\n");
//     return(0);
// }