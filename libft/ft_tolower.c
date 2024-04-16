/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:59:27 by kryochik          #+#    #+#             */
/*   Updated: 2024/04/15 21:59:30 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}

// int main(void)
// {
//     char test_chars[] = {'a', 'A', '1', '&'};

//     for (int i = 0; i < 4; i++)
//     {
//         char lower = ft_tolower(test_chars[i]);
//         printf("Original: %c, Lower: %c\n", test_chars[i], lower);

//     }
//     return (0);
// }