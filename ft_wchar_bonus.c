/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wchar_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 16:00:03 by lprior            #+#    #+#             */
/*   Updated: 2018/02/17 17:41:17 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// void	print_wchar(t_flags *bag, va_list ap)
// {
// 	char	*x;
// 	wchar_t	wx;

// 	wx = va_arg(ap, wint_t);
// 	x = convert_uni((wchar_t)(wx));
// 	LEN = 1;
// 	parse(bag);
// 	while (MINUS == false && WIDTH-- > 0)
// 		ZERO == true ? ft_putchar('0', bag) : ft_putchar(' ', bag);
// 	ft_putstr(x, bag);
// 	while (WIDTH-- > 0)
// 		ft_putchar(' ', bag);
// 	free(x);
// }
void ft_print_wchar(t_flags *tools, va_list ap)
{
    wchar_t c;

    c = va_arg(ap, wchar_t);
    if (tools->negative == 0)
        while (tools->width-- > 0)
            ft_putchar(' ');
    ft_putwchar(c);
    if (tools->negative == 1)
        while (tools->width-- >= 0)
            ft_putchar(' ');
}

void ft_print_wchar_str(t_flags *tools, va_list ap)
{
   wchar_t *i;
   

//    char * == str;
//    wchar_t * == wstr_t;

    i = va_arg(ap, wchar_t*);
    tools->prec = 0;
}
