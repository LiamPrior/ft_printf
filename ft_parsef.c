/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsef.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 14:21:44 by lprior            #+#    #+#             */
/*   Updated: 2018/01/21 17:21:33 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// void	type(char t, t_flags *bag)
// {
// 	if (t == 'd' || t == 's' || t == 'S' || t == 'p' || t == 'D' ||
// 		t == 'i' || t == 'o' || t == 'O' || t == 'u' || t == 'X' ||
// 		t == 'U' || t == 'x' || t == 'c' || t == 'C' || t == 'E' ||
// 		t == 'e' || t == 'f' || t == 'F' || t == '%' || t == 'b')
// 		TYPE = t;
// 	else
// 		TYPE = -1;
// }

//sSpdDioOuUxXcC

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
