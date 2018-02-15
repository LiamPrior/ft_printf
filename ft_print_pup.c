/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 13:23:22 by lprior            #+#    #+#             */
/*   Updated: 2018/02/15 13:27:37 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_print_pointer(t_flags *tools, va_list ap)
{
   int i;

    i = va_arg(ap, int);
    tools->prec = 0;
}


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



void ft_print_unsigned_int(t_flags *tools, va_list ap)
{
    unsigned long long int number;
    int dis;
    char *dt_holder;

    if ((number = ft_sort_unsigned_args(tools, ap)) == 0)
        number = ft_check_unsigned_int(tools, ap);
    dis = (tools->prec > -1 || tools->prec == -100) ? 1 : 0;
    ft_parse_unsigned_int_tools(tools, number);//i need to do conversions to get the length of the number.
    printf("[%c]\n", tools->brand);
    if (tools->brand == 'o' || tools->brand == 'O')
        dt_holder = ft_otoa(number);//octal done!
    else if (number <= 9223372036854775807 && (tools->brand == 'u' 
            || tools->brand == 'U'))
        dt_holder = ft_itoa(number);
    else if (tools->brand == 'x' || tools->brand == 'X')
        dt_holder = ft_htoa(number, tools);
    else if (number > 9223372036854775807 && (tools->brand == 'u' 
            || tools->brand == 'U'))
        dt_holder = ft_ullitoa(number);
    tools->len = ft_strlen(dt_holder);




}

void ft_print_percent(t_flags *tools, va_list ap)
{
   int i;

    i = va_arg(ap, int);
    tools->prec = 0;
}