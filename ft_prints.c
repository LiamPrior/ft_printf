/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prints.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 15:11:08 by lprior            #+#    #+#             */
/*   Updated: 2018/02/17 23:45:05 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print(int start, int end, char *format)
{
	int i;

	i = 0;
	while (i < start && format[i])
		i++;
	while (i < end)
	{
		write(1, &(format[i]), 1);
		i++;
	}
}

void	ft_print_zeros(t_flags *tools)
{
	while (tools->width-- >= 1)
	{
		if (tools->zeros == 1)
			ft_putchar('0');
		else if (tools->zeros == 0)
			ft_putchar(' ');
	}
}

void	ft_print_prec(t_flags *tools)
{
	if (tools->prec != -100)
		while (tools->prec-- >= 1)
			ft_putchar('0');
}

void	ft_print_address(t_flags *tools, unsigned long long int number)
{
	if (tools->brand == 'x' && number != 0)
		write(1, "0x", 2);
	else if ((tools->brand == 'o' || tools->brand == 'O') &&
			tools->prec - tools->len < 0 && number != 0)
		write(1, "0", 1);
	else if (tools->brand == 'X' && number != 0)
		write(1, "0X", 2);
	tools->hashtag = 0;
}
