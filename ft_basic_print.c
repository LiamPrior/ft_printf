/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basic_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 15:23:13 by lprior            #+#    #+#             */
/*   Updated: 2018/02/09 17:51:14 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_print_string(t_flags *tools, va_list ap)
{
    char *string;

    string = va_arg(ap, char *);
    if (string == NULL)
        string = "(null)";
    tools->len = ft_strlen(string);
    ft_parse_char_tool(tools);
    while (tools->negative == 0 && tools->width-- > 0)
    {
        if (tools->zeros == 1)
             ft_putchar('0');
        else
            ft_putchar(' ');
    }
    while ((tools->len-- > 0) && *string && tools->prec != -100)
        ft_putchar(*string++);
    while (tools->width-- > 0)
    {
        if (tools->zeros == 1)
             ft_putchar('0');
        else
            ft_putchar(' ');
    }
}

void ft_print_int2(t_flags *tools, long long int number, int dis)//if i pass number to this will re cast it incorrectly?
{
    if (tools->negative == 0)
       ft_print_zeros(tools);
    if (tools->positive == 1 && number >= 0)
    {
        ft_putchar('+');
        tools->positive = 0;
    }
    if (number <= -1)
    {
        ft_putchar('-');
        number *= -1;
        tools->positive = 0;
    }
    ft_print_prec(tools);
    if (dis == 1 && number == 0)
    {
        if (tools->zeros == 1)
            ft_putchar('0');
        else if (tools->prec == -100)
            ft_putchar(' ');
    }
    else
        ft_putnbr(number);

    while (tools->width-- >= 1)
        ft_putchar(' ');
}

void ft_print_int(t_flags *tools, va_list ap)
{
    long long int number;
    int     dis;
    
    if ((number = ft_sort_signed_args(tools, ap)) == 0)
        number = ft_check_signed_int(tools, ap);
    dis = (tools->prec > -1 || tools->prec == -100) ? 1 : 0;
    ft_parse_int_tools(tools, number);
    if (tools->zeros == 1 && tools->positive == 1 && number > -1)
    {
        ft_putchar('+');
        tools->positive = 0;
    }
    if (tools->zeros == 1 && number <= -1)
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
