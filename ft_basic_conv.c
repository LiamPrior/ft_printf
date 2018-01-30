/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basic_conv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 15:23:13 by lprior            #+#    #+#             */
/*   Updated: 2018/01/29 18:07:27 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// void	print_char(t_flags *bag, va_list ap)
// {
// 	unsigned char x;

// 	x = (unsigned char)va_arg(ap, int);
// 	LEN = 1;
// 	parse(bag);
// 	while (MINUS == false && WIDTH-- > 0)
// 		ZERO == true ? ft_putchar('0', bag) : ft_putchar(' ', bag);
// 	ft_putchar(x, bag);
// 	while (WIDTH-- > 0)
// 		ft_putchar(' ', bag);
// }
// void	parse(t_flags *bag)
// {
// 	ZERO = PRECISION < 0 ? false : ZERO;
// 	LEN = (PRECISION < LEN && IF_PREC == true) ? PRECISION : LEN;
// 	WIDTH = WIDTH < 0 && TYPE == 'c' ? WIDTH * -1 : WIDTH;
// 	WIDTH = (PRECISION < 0) ? PRECISION * -1 : WIDTH - LEN;
// 	WIDTH = (TYPE == 'c' && PRECISION < 0) ? (PRECISION * -1) - 1 : WIDTH;
// 	MINUS = (TYPE == 'c' && PRECISION < 0) ? true : MINUS;
// 	if (IF_PREC == true && PRECISION == 0 && TYPE == 'c')
// 		WIDTH--;
// }

void ft_print_string(t_flags *tools, va_list ap)
{

}

void ft_print_int(t_flags *tools, va_list ap)
{

}

void ft_print_char(t_flags *tools, va_list ap)
{
    unsigned char x;




}
