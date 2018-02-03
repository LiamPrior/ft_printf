/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_tools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 19:29:14 by lprior            #+#    #+#             */
/*   Updated: 2018/02/03 13:58:48 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_parse_char(t_flags *tools)
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

// void			parse_int(t_flags *bag, long int nb)
// {
// 	char	*len;

// 	len = ft_itoa(nb);
// 	LEN = (nb == 0 && IF_PREC == true ? 0 : ft_strlen(len));
// 	free(len);
// 	nb < 0 ? LEN-- : LEN;
// 	MINUS = WIDTH < 0 || (PRECISION < 0 && STAR == false) ? true : MINUS;
// 	WIDTH = WIDTH < 0 ? WIDTH * -1 : WIDTH;
// 	PRECISION = PRECISION < 0 && STAR == false ? PRECISION * -1 : PRECISION;
// 	PRECISION -= LEN;
// 	WIDTH -= PRECISION > 0 ? PRECISION + LEN : LEN;
// 	PLUS == true || nb < 0 ? WIDTH-- : WIDTH;
// 	ZERO = (IF_PREC == true) && STAR == false ? false : ZERO;
// 	WIDTH = SPACE == true && WIDTH < 1 && nb > 0 ? 1 : WIDTH;
// 	SPACE = nb < 0 ? false : SPACE;
// }

void			ft_parse_int(t_flags *tools, long int number)
{
    char *length;

    length = ft_itoa(nb);
    if (number == 0 && tools->ifprec == 1)
        tools->len = 0;
    else
        tools->len = ft_strlen()




}