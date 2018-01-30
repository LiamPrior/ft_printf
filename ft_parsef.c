/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsef.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 14:21:44 by lprior            #+#    #+#             */
/*   Updated: 2018/01/29 17:40:44 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_check_fwap(char *format, int *i, t_flags *tools)
{
    ft_args(format, i, tools);
	ft_width(format, i, tools);
	ft_prec(format, i, tools);
    ft_flags(format, i, tools);
}

void ft_parse_flags2(char *format, int *i, t_flags *tools)
{
	if (format[*i] != '\0')
	{
		if (format[*i] == 'h')
			ft_check_fwap(format, i, tools);
		else if (format[*i] == 'l')
			ft_check_fwap(format, i, tools);
		else if (format[*i] == 'j')
			ft_check_fwap(format, i, tools);
		else if (format[*i] == 'z')
			ft_check_fwap(format, i, tools);
	}
}

void ft_parse_flags(char *format, int *i, t_flags *tools, va_list ap)
{
	if (format[*i] != '\0')
	{
		if (format[*i] == '.')//Precision call
			ft_check_fwap(format, i,  tools);
		else if (format[*i] == '-')
			ft_check_fwap(format, i, tools);
		else if (format[*i] == '+')
			ft_check_fwap(format, i, tools);
		else if (format[*i] == ' ')
			ft_check_fwap(format, i, tools);
		else if (format[*i] == '#')
			ft_check_fwap(format, i, tools);
		else if (format[*i] == '0')
			ft_check_fwap(format, i, tools);
		else if (format[*i] >= '0' && format[*i] <= '9')//width call
			ft_check_fwap(format, i, tools);
		else 
			ft_parse_flags2(format, i,  tools);
	}
    ft_type(format[*i], tools, ap);
}
