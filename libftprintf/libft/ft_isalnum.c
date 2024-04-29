/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:51:52 by kryochik          #+#    #+#             */
/*   Updated: 2024/04/16 18:45:56 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) != 0 || ft_isdigit(c) != 0)
	{
		return (1);
	}
	return (0);
}

// int main(void)
// {
//     char test_chars[] = {'A', '!', '1'};

//     for (int i = 0; i < 3; i++)
//     {
//         if(ft_isalnum(test_chars[i]))
//         {
//             printf("%c is alnum.\n", test_chars[i]);
//         }
//         else
//         {
//             printf("%c is not alnum.\n", test_chars[i]);
//         }
//     }
//     return (0);
// }