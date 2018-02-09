/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prints.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 15:11:08 by lprior            #+#    #+#             */
/*   Updated: 2018/02/08 15:57:12 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_print(int start, int end, char *format)
{
    int i;

    i = 0;
    while (i < start && format[i])
        i++;
    while(i < end)
    {    
        write(1, &(format[i]), 1);
        i++;
    }
}

void ft_print_zeros(t_flags *tools)
{
    while (tools->width-- >= 1)
    {
        if (tools->zeros == 1)
            ft_putchar('0');
        else if (tools->zeros == 0)
            ft_putchar(' ');
    }
}

void    ft_print_prec(t_flags *tools)
{
    while (tools->prec-- >= 1)
        ft_putchar('0');
}
// void	print_plus(t_flags *bag, long int *nb)
// {
// 	if (PLUS == true && *nb > -1)
// 		ft_putchar('+', bag);
// 	if (*nb < 0 && *nb != (LL_MIN))
// 	{
// 		ft_putchar('-', bag);
// 		*nb *= -1;
// 	}
// 	PLUS = false;
// }