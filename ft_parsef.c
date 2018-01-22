/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsef.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 14:21:44 by lprior            #+#    #+#             */
/*   Updated: 2018/01/21 20:15:24 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_fwap(char *format, int *i, va_list ap, t_flags *tools)
{
    ft_args(format, i, tools);
	ft_width(format, i, tools);
	ft_prec(format, i, tools, ap);
    ft_flags(format, i, tools);
}

void parse_flags2(char *format, int *i, va_list ap, t_flags *tools)
{
	if (format[*i] != '\0')
	{
		if (format[*i] == 'h')
			ft_fwap(format, i, tools, ap);
		else if (format[*i] == 'l')
			ft_fwap(format, i, tools, ap);
		else if (format[*i] == 'j')
			ft_fwap(format, i, tools, ap);
		else if (format[*i] == 'z')
			ft_fwap(format, i, tools, ap);
	}
}

void parse_flags(char *format, int *i, va_list ap, t_flags *tools)
{
	if (format[*i] != '\0')
	{
		if (format[*i] == '.')
			ft_fwap(format, i,  tools, ap);
		else if (format[*i] == '-')
			ft_fwap(format, i, tools, ap);
		else if (format[*i] == '+')
			ft_fwap(format, i, tools, ap);
		else if (format[*i] == ' ')
			ft_fwap(format, i, tools, ap);
		else if (format[*i] == '#')
			ft_fwap(format, i, tools, ap);
		else if (format[*i] == '0')
			ft_fwap(format, i, tools, ap);
		else if (format[*i] >= '0' && format[*i] <= '9')//width call
			ft_fwap(format, i, tools, ap);
		else 
			parse_falgs2(format, &i,  tools, ap);
	}
    ft_type(format[*i], tools);
}
