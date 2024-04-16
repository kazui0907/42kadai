/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 04:12:26 by kryochik          #+#    #+#             */
/*   Updated: 2024/03/11 15:21:16 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int	main(void)
// {
//     char str[] = "abcd"; // 例としての文字列
//     int len = ft_strlen(str); // 文字列の長さを取得

//     // printf を使って文字列の長さを出力
//     printf("文字列の長さ: %d\n", len);

//     return 0;
// }