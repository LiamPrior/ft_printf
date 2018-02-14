/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion_tools.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 18:34:47 by lprior            #+#    #+#             */
/*   Updated: 2018/02/14 12:26:49 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


// char	*convert_octal(unsigned long int nb)
// {
// 	char	*print;
// 	int		i;

// 	i = 0;
// 	print = ft_memalloc(22);
// 	if (nb == 0)
// 		print[i++] = '0';
// 	while (nb != 0)
// 	{
// 		print[i++] = (nb % 8) + 48;
// 		nb /= 8;
// 	}
// 	print[i] = '\0';
// 	return (ft_strrev(print));
// }

char *ft_otoa(unsigned long int number)
{
    char *print;
    int i;

    print = ft_strnew(24);
    if (number < 0)
        return ("errno: Unsigned Only!");
    if (number == 0)
    {
        print[i] = '0';
        i++;
    }
    while (number)
    {
        print[i] = (number % 8) + 48;
        number /= 8;
        i++;
    }
    print[i] = '\0';
    return (ft_strrev(print));
}
	// char		*print;
	// int			i;

	// i = 0;
	// print = ft_memalloc(21);
	// if (nb == 0)
	// 	print[i] = '0';
	// if (type == 'x' || type == 'p')
	// 	while (nb != 0)
	// 	{
	// 		print[i++] = "0123456789abcdef"[nb % 16];
	// 		nb /= 16;
	// 	}
	// else
	// 	while (nb != 0)
	// 	{
	// 		print[i++] = "0123456789ABCDEF"[nb % 16];
	// 		nb /= 16;
	// 	}
    // return (ft_strrev(print));
    
char *ft_htoa(unsigned long int number, t_flags *tools)
{
    char *print;
    int i;
    
    i = 0;
    if (number = 0)
        print[i] = '0';
    print = strnew(18);
	while (number && tools->brand == 'x')
	{
		print[i++] = "0123456789abcdef"[number % 16];
		number /= 16;
	}
	while (number && tools->brand == 'X')
	{
		print[i++] = "0123456789ABCDEF"[number % 16];
		number /= 16;
	}
}

