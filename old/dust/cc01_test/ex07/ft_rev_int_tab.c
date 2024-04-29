/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 04:21:35 by kryochik          #+#    #+#             */
/*   Updated: 2024/03/08 02:04:48 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tab2[size];
	int	t;
	
	t = 0; 
	size--;

	while (size >= 0)
	{
		tab2[size] = tab[t];
		size--;
		t++;
	}
	t--;

	while (t >= 0)
	{
		tab[t] = tab2[t];

		t--;
	}
}
int main()
{
    int tab[6] = {1,2,3,4,5,6};
    int size = 6;
    ft_rev_int_tab(tab, size);

    printf("%d,%d,%d,%d,%d,%d\n" ,tab[0],tab[1],tab[2],tab[3],tab[4],tab[5]);

    return 0;
}