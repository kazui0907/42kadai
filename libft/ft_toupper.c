/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:16:32 by kryochik          #+#    #+#             */
/*   Updated: 2024/04/28 23:37:02 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

// int main(void)
// {
//     char test_chars[] = {'a', 'A', '1', '&'};

//     for (int i = 0; i < 4; i++)
//     {
//         char upper = ft_toupper(test_chars[i]);
//         printf("Original: %c, Upper: %c\n", test_chars[i], upper);

//     }
//     return (0);
// }