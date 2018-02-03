/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basic_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 15:23:13 by lprior            #+#    #+#             */
/*   Updated: 2018/02/02 18:14:57 by lprior           ###   ########.fr       */
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


void ft_print_string(t_flags *tools, va_list ap)
{





}

void ft_print_int(t_flags *tools, va_list ap)
{

}

void ft_print_char(t_flags *tools, va_list ap)
{
    unsigned char x;

    x = va_arg(ap, unsigned char);
    parse_tools(tools);

}
