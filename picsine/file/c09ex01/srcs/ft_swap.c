/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:40:22 by kryochik          #+#    #+#             */
/*   Updated: 2024/03/06 20:43:37 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

// int	main(void)
// {
// 	int a;
//     int b;
//     a = 100;
//     b = 1;
//     printf("最初の数字は\n");
//     printf("a=%d\n", a);
//     printf("b=%d\n", b);

//     ft_swap(&a, &b);

//     printf("入れ替え後の数字は\n");
//     printf("a=%d\n", a);
//     printf("b=%d\n", b);

//     return 0;

// }