/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 19:49:04 by kryochik          #+#    #+#             */
/*   Updated: 2024/03/11 15:21:20 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)

{
	char	*start;

	start = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}

// int	main(void) {
//     char src[] = "abcdef";
//     char dest[20]; // コピー先のバッファ

//     ft_strcpy(dest, src); // my_strcpyを使って文字列をコピー
//     printf("%s\n", dest); // コピーされた文字列を表示

//     return 0;
// }