/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazui <kazui@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:56:52 by kryochik          #+#    #+#             */
/*   Updated: 2024/05/10 19:17:03 by kazui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"

int handle_min_int(int *printed)
{
    ft_putnbr_fd(-2147483648, 1);
    *printed += 11;
    return (1);
}

void handle_negative_number(int *n, int *printed) 
{
    ft_putnbr_fd('-', 1);
    *n = -*n;
    (*printed)++;
}

int calculate_digits(int n)
{
    int digits;
    int temp;

	digits = 0;
	temp = n;
    if (n == 0)
        return (1);

    while (temp != 0)
	{
        temp /= 10;
        digits++;
    }
    return (digits);
}

void print_number(int n, int *printed)
{
    if (n == -2147483648)
    {
        handle_min_int(printed);
        return;
    }
    if (n < 0)
    {
        write(1, "-", 1);
        n = -n;
        (*printed)++;
    }
    *printed += calculate_digits(n);
    ft_putnbr_fd(n, 1);
}


