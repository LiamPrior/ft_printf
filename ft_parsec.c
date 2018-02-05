/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 15:36:04 by lprior            #+#    #+#             */
/*   Updated: 2018/02/05 14:53:59 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_check_type2(char format, t_flags *tools, va_list ap)
{
	if (format == 'o' || format == 'O' || format == 'u' || format == 'U'
		|| format == 'x' || format == 'X')
	{
		tools->brand = format;
		ft_print_unsigned_int(tools, ap);
	}
	else if (format == 'c')
	{
		tools->brand = format;
		tools->len = 1;
		ft_print_char(tools, ap);
	}
	else if (format == '%')
	{
		tools->brand = format;
		ft_print_precision(tools, ap);
	}
	else if (format == 'b')
	{
		tools->brand = format;
		ft_print_binary(tools, ap);
	}
	else
		tools->brand = -1;
}

void ft_check_type(char format, t_flags *tools, va_list ap)
{
	if (format == 's')
	{
		tools->brand = format;
		ft_print_string(tools, ap);
	}
	else if (format == 'S')
	{
		tools->brand = format;
		if (format == 'C')
			ft_print_wchar(tools, ap);
		else
			ft_print_wchar_str(tools, ap);
	}
	else if (format == 'p')
	{
		tools->brand = format;
		ft_print_pointer(tools, ap);
	}
	else if (format == 'd' || format == 'D' || format == 'i')
	{
		tools->brand = format;
		ft_print_int(tools, ap);
	}
	else
		ft_check_type2(format, tools, ap);
}
