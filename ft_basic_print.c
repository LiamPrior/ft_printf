/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basic_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 15:23:13 by lprior            #+#    #+#             */
/*   Updated: 2018/02/08 18:29:21 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_print_string(t_flags *tools, va_list ap)
{
    char *string;

    string = va_arg(ap, char *);
    // str = (str == NULL ? "(null)" : str);
    tools->len = ft_strlen(string);
    ft_parse_char_tool(tools);
    while (tools->negative == 0 && tools->width-- > 0)
    {
        if (tools->zeros == 1)
             ft_putchar('0');
        else
            ft_putchar(' ');
    }
    while ((tools->len-- > 0) && *string)
        ft_putchar(*string++);
    while (tools->width-- > 0)
    {
        if (tools->zeros == 1)
             ft_putchar('0');
        else
            ft_putchar(' ');
    }
}

// void			print_int(t_flags *bag, va_list ap)
// {
// 	long int nb;

// 	nb = assign_value(bag, ap);
// 	parse_int(bag, nb);
// 	if (ZERO == true)
// 		print_plus(bag, &nb);
// 	if (SPACE == true && WIDTH--)
// 		ft_putchar(' ', bag);
// 	while (MINUS == false && WIDTH-- > 0)
// 		ZERO == true ? ft_putchar('0', bag) : ft_putchar(' ', bag);
// 	print_plus(bag, &nb);
// 	while (PRECISION-- > 0)
// 		ft_putchar('0', bag);
// 	if ((LEN > 0) || (nb == 0 && IF_PREC == false))
// 		ft_putnbr(nb, bag);
// 	while (WIDTH-- > 0)
// 		ft_putchar(' ', bag);
// }

void ft_print_int2(t_flags *tools, long int number, int dis)//if i pass number to this will re cast it incorrectly?
{
    if (tools->positive == 1 && number >= 0)
    {
        ft_putchar('+');
        tools->positive = 0;
    }
    if (number <= -1)// != LL_min
    {
        ft_putchar('-');
        number *= -1;
        tools->positive = 0;
    }
    // if (tools->prec == 0 && dis == 0)
    //     ft_putchar(' ');
    ft_print_prec(tools);
    // dis = 0;
    // if (dis == 1 && number == 0)//if i do this then the top half works.
    // {
    //     if (tools->zeros == 1)
    //         ft_putchar('0');
    //     else if (tools->zeros == 0)
    //         ft_putchar(' ');
    // }
    // else
    if (number == 0 && dis == 0)//so if i do this then the bottum half works.
        ft_putnbr(number);
    while (tools->width-- >= 1)
        ft_putchar(' ');
}

void ft_print_int(t_flags *tools, va_list ap)
{
    long int number;
    int     dis;
    
    if ((number = ft_sort_signed_args(tools, ap)) == 0)
        number = ft_check_signed_int(tools, ap);
    dis = tools->prec > -1 ? 1 : 0;
    ft_parse_int_tools(tools, number);
    if (tools->zeros == 1 && tools->positive == 1 && number > -1)
    {
        ft_putchar('+');
        tools->positive = 0;
    }
    if (tools->zeros == 1 && number <= -1)// != LL_min
    {
        ft_putchar('-');
        number *= -1;
        tools->positive = 0;
    }
    if (tools->space == 1)
    {
        tools->width--;
        ft_putchar(' ');
    }
    if (tools->negative == 0)
       ft_print_zeros(tools);
    ft_print_int2(tools, number, dis);
} 

void ft_print_char(t_flags *tools, va_list ap)
{
    unsigned char leter;
    leter = va_arg(ap, int);
    ft_parse_char_tool(tools);
    while (tools->negative == 0 && tools->width-- > 0)
    {  
        if (tools->zeros == 1)
             ft_putchar('0');
        else
            ft_putchar(' ');
    }
    ft_putchar(leter);
    while (tools->width-- > 0)
        ft_putchar(' ');
}
