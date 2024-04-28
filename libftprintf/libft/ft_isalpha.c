/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:51:59 by kryochik          #+#    #+#             */
/*   Updated: 2024/04/15 21:52:01 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

// int main(void)
// {
//     char test_chars[] = {'A', 'g', '1'};

//     for (int i = 0; i < 3; i++)
//     {
//         if(ft_isalpha(test_chars[i]))
//         {
//             printf("%c is alphabet.\n", test_chars[i]);
//         }
//         else
//         {
//             printf("%c is not alphabet.\n", test_chars[i]);
//         }
//     }
//     return (0);
// }