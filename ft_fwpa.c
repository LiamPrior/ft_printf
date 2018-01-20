/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fwpa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 12:12:06 by lprior            #+#    #+#             */
/*   Updated: 2018/01/20 13:18:35 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// void	flags(char *f, int *i, t_flags *bag)
// {
// 	while (f[*i] != '\0' && (f[*i] == '+' || f[*i] == '-' ||
// 			f[*i] == '0' || f[*i] == ' ' || f[*i] == '#'))
// 	{
// 		if (f[*i] == '+')
// 		{
// 			PLUS = true;
// 			SPACE = false;
// 		}
// 		if (f[*i] == '-')
// 		{
// 			MINUS = true;
// 			ZERO = false;
// 		}
// 		if (f[*i] == '#')
// 			HASH = true;
// 		if (f[*i] == '0' && MINUS == false)
// 			ZERO = true;
// 		if (f[*i] == ' ' && PLUS == false)
// 			SPACE = true;
// 		*i += 1;
// 	}
// }

void    width(char *format, int *i, t_flags *tools)
{
    char *ptr;

    ptr = format;
    while (ft_isdigit(format[*i] && format[*i] != '\0')
    {
        format += *i;
        tools->width = ft_atoi(ptr);
        while (ft_isdigit(format[*i]))
            *i += 1;
    }
}

char *ft_flags(char *format, int *i, t_flags *tools)
{
    while (format)
}