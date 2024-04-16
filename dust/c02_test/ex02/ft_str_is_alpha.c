/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 04:47:38 by kryochik          #+#    #+#             */
/*   Updated: 2024/03/10 22:12:08 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	t;

	i = 0;
	while ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
	{
		i++;
	}
	if (str[i] == '\0')
	{
		t = 1;
	}
	else
	{
		t = 0;
	}
	return (t);
}
//int main()
//{
//	int t;
//	char str[6] = "ab1fg";
//	t=ft_str_is_alpha(str);
//	printf("%d\n",t);
//
//	return (0);
//}
