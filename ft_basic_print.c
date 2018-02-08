/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basic_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 15:23:13 by lprior            #+#    #+#             */
/*   Updated: 2018/02/07 19:49:58 by lprior           ###   ########.fr       */
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

void ft_print_int(t_flags *tools, va_list ap)
{
    long int nb;

    nb = ft_check_int(tools); 
    if (tools->arg > 0 && (tools->brand == 'i' || tools->brand == 'd' 
        || tools->brand == 'D'))
        nb = ft_sort_signed_args(tools, ap);
    else if (tools->arg > 0)
        nb = ft_sort_unsigned_args(tools, ap);
    
    

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

void ft_print(int start, int end, char *format)
{
    int i;

    i = 0;
    while (i < start && format[i])
        i++;
    while(i < end)
    {    
        write(1, &(format[i]), 1);
        i++;
    }
}
