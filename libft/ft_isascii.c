/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:52:04 by kryochik          #+#    #+#             */
/*   Updated: 2024/04/15 21:52:06 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

// int main(void)
// {
//     char test_chars[] = {1, -1, '1', '&', 'a'};

//     for (int i = 0; i < 5; i++)
//     {
//         if(ft_isascii(test_chars[i]))
//         {
//             printf("%c(%d) is ascii.\n", test_chars[i], test_chars[i]);
//         }
//         else
//         {
//             printf("%d is not ascii.\n", test_chars[i]);
//         }
//     }
//     return (0);
// }