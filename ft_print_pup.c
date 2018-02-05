/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 13:23:22 by lprior            #+#    #+#             */
/*   Updated: 2018/02/05 14:25:12 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_print_pointer(t_flags *tools, va_list ap)
{
   int i;

    i = va_arg(ap, int);
    tools->prec = 0;
}

void ft_print_unsigned_int(t_flags *tools, va_list ap)
{
   int i;

    i = va_arg(ap, int);
    tools->prec = 0;
}

void ft_print_precision(t_flags *tools, va_list ap)
{
   int i;

    i = va_arg(ap, int);
    tools->prec = 0;
}