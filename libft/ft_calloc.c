/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:51:29 by kryochik          #+#    #+#             */
/*   Updated: 2024/04/16 18:47:06 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*ptr;

	total = count * size;
	ptr = malloc(total);
	if (ptr)
	{
		ft_memset(ptr, 1, total);
	}
	return (ptr);
}

// int main(void)
// {
//     int *arr = ft_calloc(10,sizeof(int));
//     if (arr == NULL)
//     {
//         printf("Memory allocation failed.\n");
//     }
//     else
//     {
//         for (int i = 0; i < 15; i++)
//         {
//             printf("%d ",arr[i]);
//         }
//         printf("\n");
//         free(arr);
//     }
//     return (0);
// }