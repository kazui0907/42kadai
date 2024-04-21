/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:51:29 by kryochik          #+#    #+#             */
/*   Updated: 2024/04/22 04:56:36 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*ptr;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	total = count * size;
	ptr = malloc(total);
	if (ptr)
	{
		ft_memset(ptr, 0, total);
	}
	return (ptr);
}

// int main(void)
// {
// 	int n = 100;
//     int *arr = ft_calloc(n,sizeof(char));
//     if (arr == NULL)
//     {
//         printf("Memory allocation failed.\n");
//     }
//     else
//     {
//         for (int i = 0; i < n; i++)
//         {
//             printf("%d ",arr[i]);
//         }
//         printf("\n");
//         free(arr);
//     }
//     return (0);
// }