/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fwpa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 12:12:06 by lprior            #+#    #+#             */
/*   Updated: 2018/01/20 14:47:55 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
.0

void    width(char *format, int *i, t_flags *tools)
{
    char *ptr;

    ptr = format;
    while (ft_isdigit(format[*i] && (format[*i] != '\0'))
    {
        format += *i;
        tools->width = ft_atoi(ptr);
        while (ft_isdigit(format[*i]))
            *i++;//*i += 1;
    }
}

void    ft_flags(char *format, int *i, t_flags *tools)
{
    while (format[*i] != '\0' && (format[*i] == '-' || format[*i] == '+' || 
            format == '0' ||  format == '#' ||  format == ' '))
    {
        if (format[*i] == '-')
        {
            tools->negative = 1;
            tools->zero = 0;
        }
        if (format[*i] == '+')
        {
            tools->positive = 1;
            tools->space = 0;
        }
        if (format[*i] == ' ' && tools->positive == 0)
            tools->space = 1;
        else if (format[*i] == '#')
            tools->hash = 1;
        else if (format[*i] == '0' && tools->negative == 0)
            tools->zero = 1;
        *i++;//*i += 1;
    }
}

