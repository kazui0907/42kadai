/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:52:17 by kryochik          #+#    #+#             */
/*   Updated: 2024/05/09 11:03:03 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

// int main(void)
// {
//     char test_chars[] = {1, 127, '1', '&', 'a'};

//     for (int i = 0; i < 5; i++)
//     {
//         if(ft_isprint(test_chars[i]))
//         {
//             printf("%c(%d) is printable.\n", test_chars[i], test_chars[i]);
//         }
//         else
//         {
//             printf("(%d) is not printable.\n", test_chars[i]);
//         }
//     }
//     return (0);
// }