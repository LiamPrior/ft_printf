/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 13:23:22 by lprior            #+#    #+#             */
/*   Updated: 2018/02/04 14:02:11 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_print_pointer(t_flags *tools, va_list ap)
{
   int i;

    i = va_arg(ap, int);
    tools->ifprec = 0;
}

void ft_print_unsigned_int(t_flags *tools, va_list ap)
{
   int i;

    i = va_arg(ap, int);
    tools->ifprec = 0;
}

void ft_print_precision(t_flags *tools, va_list ap)
{
   int i;

    i = va_arg(ap, int);
    tools->ifprec = 0;
}