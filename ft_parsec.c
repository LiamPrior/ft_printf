/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 15:36:04 by lprior            #+#    #+#             */
/*   Updated: 2018/01/22 15:06:08 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_type2(char format, t_flags *tools)
{
	 if (format == 'X')
		tools->brand = format;
	else if (format == 'c')
		tools->brand = format;
	else if (format == 'C')
		tools->brand = format;
	else if (format == '%')
		tools->brand = format;
	else
		tools->brand = -1;
}

void ft_type(char format, t_flags *tools)
{
	if (format == 's')
		tools->brand = format;
	else if (format == 'S')
		tools->brand = format;
	else if (format == 'p')
		tools->brand = format;
	else if (format == 'd')
		tools->brand = format;
	else if (format == 'D')
		tools->brand = format;
	else if (format == 'i')
		tools->brand = format;
	else if (format == 'o')
		tools->brand = format;
	else if (format == 'O')
		tools->brand = format;
	else if (format == 'u')
		tools->brand = format;
	else if (format == 'U')
		tools->brand = format;
	else if (format == 'x')
		tools->brand = format;
	else
		ft_type2(format, tools);
}