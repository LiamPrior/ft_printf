/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_tools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 19:29:14 by lprior            #+#    #+#             */
/*   Updated: 2018/02/02 14:48:33 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    parse_bag(t_flags *tools)
{
    if (tools->prec < 0)
        tools->zeros = 0;
    if (tools->prec < tools->len && tools->prec == 1)
        tools->len = tools->prec;
    if (tools->width < 0 && tools->type == 'c')
        tools->width *= -1;
    if (tools->prec < 0)
        tools->width = tools->prec * -1;
    else
        tools->width -= tools->len;
    if (tools->brand == 'c' && tools->prec < 0)
    {
        tools->width = ((tools->prec * -1) - 1);
        tools->negative = 1;
    }
    if (tools->ifprec == 1 && tools->prec == 0 && tools->brand == 'c')
        tools->width -= 1;
}