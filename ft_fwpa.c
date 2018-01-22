/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fwpa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 12:12:06 by lprior            #+#    #+#             */
/*   Updated: 2018/01/22 10:32:34 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    width(char *format, int *i, t_flags *tools)
{
    char *ptr;

    ptr = format;
    while (ft_isdigit(format[*i]) && format[*i] != '\0')
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
        else if (format[*i] == '+')
        {
            tools->positive = 1;
            tools->space = 0;
        }
        else if (format[*i] == ' ' && tools->positive == 0)
            tools->space = 1;
        else if (format[*i] == '#')
            tools->hash = 1;
        else if (format[*i] == '0' && tools->negative == 0)
            tools->zero = 1;
        *i++;//*i += 1;
    }
}

void ft_args(char *format, int *i, t_flags *tools)
{
    while (format[*i] != '\0' && (format[*i] == 'h' || format[*i] == 'l' ||
            format[*i] == 'z' || format[*i] == 'j'))
            {
                if (format[*i] == 'z')
                    tools->arg = 1;
                else if (format[*i] == 'j') 
                    tools->arg = 2;
                else if (format[*i] == 'h') 
                {
                    if (tools->arg == 3)
                        tools->arg = 5;
                    else
                        tools->arg = 3;
                }
                else if (format[*i] == 'l')
                {
                    if (tools->arg == 4)
                        tools->arg = 6;
                    else
                        tools->arg = 4;
                }
                i += 1;
            }
}

void    ft_prec(char *format, int *i, va_list ap, t_flags *tools)
{
    char *tmp;

    tmp = format;
    if(format[*i] == '.')
        continue ;
    else
        return ;
    *i++;// *i += 1;
	while (format[*i] != '\0' && (format[*i] == '-' || 
            isdigit(format[*i])))
    {
        tmp += *i;
        while (isdigit(tmp[*i]))
            *i++;// *i += 1;
        tools->prec = atoi(tmp);
    }
}
