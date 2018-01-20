/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsef.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 14:21:44 by lprior            #+#    #+#             */
/*   Updated: 2018/01/20 11:59:57 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void fwpa(char *format, int *i, va_list ap, t_flags *sack)
{
    arguments(format, i, sack);
	width(format, i, sack, ap);
	precision(format, i, sack, ap);
    flags(format, i, sack);
}

void parse_flags(char *format, int *i, va_list ap, t_flags *tools)
{
	if (format[*i] != '\0')
	{
		if (format[*i] == '.')
			fwpa(format, i,  tools, ap);
		else if (format[*i] == '-')
			fwpa(format, i, tools, ap);
		else if (format[*i] == '+')
			fwpa(format, i, tools, ap);
		else if (format[*i] == ' ')
			fwpa(format, i, tools, ap);
		else if (format[*i] == '#')
			fwpa(format, i, tools, ap);
		else if (format[*i] == '0')
			fwpa(format, i, tools, ap);
		else if (format[*i] >= '0' && format[*i] <= '9')
			fwpa(format, i, tools, ap);
		else 
			parse_falgs2(format, &i,  tools, ap);
	}
    type(format[*i], tools);
}

void parse_flags2(char *format, int *i, va_list ap, t_flags *sack)
{
	if (format[*i] != '\0')
	{
		if (format[*i] == 'h')
			fwpa(format, i, sack, ap);
		else if (format[*i] == 'l')
			fwpa(format, i, sack, ap);
		else if (format[*i] == 'j')
			fwpa(format, i, sack, ap);
		else if (format[*i] == 'z')
			fwpa(format, i, sack, ap);
	}
}