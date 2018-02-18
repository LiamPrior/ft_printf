/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wchar_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 16:00:03 by lprior            #+#    #+#             */
/*   Updated: 2018/02/17 20:35:31 by lprior           ###   ########.fr       */
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

// int		ft_unichar(va_list ap, t_options *info)
// {
// 	int c;

// 	c = va_arg(ap, wchar_t);
// 	if (c < 0x80)
// 		ft_putchar(c);
// 	else if (c < 0x800)
// 	{
// 		ft_putchar(0xC0 | (c >> 6));
// 		ft_putchar(0x80 | (c & 0x3F));
// 	}
// 	else if (c < 0x10000)
// 	{
// 		ft_putchar(0xE0 | (c >> 12));
// 		ft_putchar(0x80 | (c >> 6 & 0x3F));
// 		ft_putchar(0x80 | (c & 0x3F));
// 	}
// 	else if (c < 0x200000)
// 	{
// 		ft_putchar(0xF0 | (c >> 18));
// 		ft_putchar(0x80 | (c >> 12 & 0x3F));
// 		ft_putchar(0x80 | (c >> 6 & 0x3F));
// 		ft_putchar(0x80 | (c & 0x3F));
// 	}
// 	(void)info;
// 	return (1);
// }

// char	*convert_uni(wchar_t wide)
// {
// 	char *new;

// 	new = ft_strnew(5);
// 	if (wide < 0x80)
// 		new[0] = ( ) & 0x7F) | 0x00;
// 	else if (wide < 0x800)
// 	{
// 		new[0] = ((wide >> 6) & 0x1F) | 0xC0;
// 		new[1] = ((wide >> 0) & 0x3F) | 0x80;//good prefix
// 	}
// 	else if (wide < 0x10000)
// 	{
// 		new[0] = ((wide >> 12) & 0x0F) | 0xE0;
// 		new[1] = ((wide >> 6) & 0x3F) | 0x80;
// 		new[2] = ((wide >> 0) & 0x3F) | 0x80;
// 	}
// 	else if (wide < 0x10FFFF)
// 	{
// 		new[0] = ((wide >> 18) & 0x07) | 0xF0;
// 		new[1] = ((wide >> 12) & 0x3F) | 0x80;
// 		new[2] = ((wide >> 6) & 0x3F) | 0x80;
// 		new[3] = ((wide >> 0) & 0x3F) | 0x80;
// 	}
// 	return (new);
// }
//ask pola what is the point of each byte after the convertion!
void ft_unitoa(wint_t wide)
{
    if (wide < 0x80)
        ft_putchar(wide);
    else if (wide < 0x800)
    {
        ft_putchar(((wide >> 6) & 0x1F) | 0xC0);
        ft_putchar(((wide >> 6) & 0x3F) | 0x80);
    }
    else if (wide < 0x10000)
    {
        ft_putchar(((wide >> 12) & 0x0F) | 0xE0);
		ft_putchar(((wide >> 6) & 0x3F) | 0x80);
		ft_putchar(((wide >> 0) & 0x3F) | 0x80);
    }
    else if (wide < 0x10FFFF)
    {
        ft_putchar(((wide >> 18) & 0x07) | 0xF0);
        ft_putchar(((wide >> 12) & 0x3F) | 0x80);
        ft_putchar(((wide >> 6) & 0x3F) | 0x80);
        ft_putchar(((wide >> 0) & 0x3F) | 0x80);
    }
}

void ft_print_wchar(t_flags *tools, va_list ap)
{
    wchar_t c;

    c = va_arg(ap, wint_t);
    if (tools->negative == 0)
        while (tools->width-- > 0)
            ft_putchar(' ');
    ft_unitoa(c);
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
