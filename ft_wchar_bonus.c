/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wchar_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 16:00:03 by lprior            #+#    #+#             */
/*   Updated: 2018/02/04 14:02:31 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_print_wchar(t_flags *tools, va_list ap)
{
       int i;

    i = va_arg(ap, int);
    tools->ifprec = 0;
}

void ft_print_wchar_str(t_flags *tools, va_list ap)
{
   int i;

    i = va_arg(ap, int);
    tools->ifprec = 0;
}

void ft_print_binary(t_flags *tools, va_list ap)
{
       int i;

    i = va_arg(ap, int);
    tools->ifprec = 0;
}