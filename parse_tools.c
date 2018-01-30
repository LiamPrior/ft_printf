/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_tools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 19:29:14 by lprior            #+#    #+#             */
/*   Updated: 2018/01/29 19:48:50 by lprior           ###   ########.fr       */
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
    if (tools->width)


}