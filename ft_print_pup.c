/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 13:23:22 by lprior            #+#    #+#             */
/*   Updated: 2018/02/15 20:31:19 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_print_pointer(t_flags *tools, va_list ap)
{
   int i;

    i = va_arg(ap, int);
    tools->prec = 0;
}

// void	print_hash(t_flags *bag, unsigned long long int nb)
// {
// 	if ((TYPE == 'x' || TYPE == 'X') && HASH == true && nb != 0)
// 		(TYPE == 'x') ? ft_putstr("0x", bag) : ft_putstr("0X", bag);
// 	if ((TYPE == 'o' || TYPE == 'O') && HASH == true && PRECISION - LEN < 0)
// 		ft_putstr("0", bag);
// 	if (TYPE == 'p' && HASH == true)
// 		ft_putstr("0x", bag);
// 	HASH = false;
// }
// void			print_unsigned_int(t_flags *bag, va_list ap)
// {
// 	unsigned long long int	nb;
// 	char					*print;

// 	nb = assign_value(bag, ap);
// 	print = (nb > LL_MAX && (TYPE == 'u' || TYPE == 'U'))
// 	? ft_ulltoa(nb) : convert(bag, nb);
// 	LEN = nb == 0 ? 0 : ft_strlen(print);
// 	parse_unsigned_int(bag);
// 	if (ZERO == true)
// 		print_hash(bag, nb);
// 	if (MINUS == false)
// 		while (WIDTH-- > 0)
// 			ZERO == true ? ft_putchar('0', bag) : ft_putchar(' ', bag);
// 	print_hash(bag, nb);
// 	while (PRECISION-- > 0)
// 		ft_putchar('0', bag);
// 	if (DISPLAY == true)
// 		ft_putstr(print, bag);
// 	while (WIDTH-- > 0)
// 		ft_putchar(' ', bag);
// 	free(print);
// }

void    ft_print_unsigned_int2(t_flags *tools, unsigned long long int number, int dis, char *dt_holder)
{
    // printf("width == [%d]\n", tools->width);
    if (tools->hashtag == 1 && tools->width <= 0)
        ft_print_address(tools, number);
    //printing her width
    if (tools->zeros == 1)// && tools->prec > 0 && dis != -100)
    {
        while (tools->width-- > 0)
            ft_putchar('0');
    }
    else if (tools->negative == 0)
    {
        while (tools->width-- > 0)
            ft_putchar(' ');
    }    
    if (tools->hashtag == 1)
        ft_print_address(tools, number);    
    while (tools->prec-- > 0 && dis != 0)
        ft_putchar('0');
    if (!(dis == 1 && number == 0))
        ft_putstr(dt_holder);
    while (tools->width-- > 0)
        ft_putchar(' ');
    free(dt_holder);
}

void ft_print_unsigned_int(t_flags *tools, va_list ap)
{
    unsigned long long int number;
    int dis;
    char *dt_holder;
    if ((number = ft_sort_unsigned_args(tools, ap)) == 0)
        number = ft_check_unsigned_int(tools, ap);
    dis = ((tools->prec > -1 || tools->prec == -100)) ? 1 : 0;//if i add && number != 0;
    if (number <= 9223372036854775807 && (tools->brand == 'o' 
        || tools->brand == 'O'))
        dt_holder = ft_otoa(number);//octal done!
    else if (number <= 4294967295 && (tools->brand == 'u' 
            || tools->brand == 'U'))
        dt_holder = ft_uitoa(number);//done!
    else if (tools->brand == 'x' || tools->brand == 'X')
        dt_holder = ft_htoa(number, tools);//Hex done!
    else if (number > 4294967295 && (tools->brand == 'u' 
            || tools->brand == 'U'))//done!
        dt_holder = ft_ullitoa(number);
    else
        dt_holder = (NULL);
    tools->len = ft_strlen(dt_holder);
    ft_parse_unsigned_int_tools(tools, number);
    ft_print_unsigned_int2(tools, number, dis, dt_holder);
}

void ft_print_percent(t_flags *tools, va_list ap)
{
   int i;

    i = va_arg(ap, int);
    tools->prec = 0;
}