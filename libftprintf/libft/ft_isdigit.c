/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:52:10 by kryochik          #+#    #+#             */
/*   Updated: 2024/04/15 21:52:12 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

// int main(void)
// {
//     char test_chars[] = {'1', '&', 'a'};

//     for (int i = 0; i < 3; i++)
//     {
//         if(ft_isdigit(test_chars[i]))
//         {
//             printf("%c is digit.\n", test_chars[i]);
//         }
//         else
//         {
//             printf("%c is not digit.\n", test_chars[i]);
//         }
//     }
//     return (0);
// }