/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion_tools.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 18:34:47 by lprior            #+#    #+#             */
/*   Updated: 2018/02/12 18:58:08 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// char	*convert_hex(unsigned long int nb, char type)
// {
// 	char		*print;
// 	int			i;

// 	i = 0;
// 	print = ft_memalloc(21);
// 	if (nb == 0)
// 		print[i] = '0';
// 	if (type == 'x' || type == 'p')
// 		while (nb != 0)
// 		{
// 			print[i++] = "0123456789abcdef"[nb % 16];
// 			nb /= 16;
// 		}
// 	else
// 		while (nb != 0)
// 		{
// 			print[i++] = "0123456789ABCDEF"[nb % 16];
// 			nb /= 16;
// 		}
// 	return (ft_strrev(print));
// }

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

char *ft_convert_oct(unsigned long int number)
{
    char *print;
    int i;

    print = ft_strnew(22);
    if (number < 0)
        return ("errno");
    if (number == 0)
    {
        print[i] = '0';
        i++;
    }
    while (number)
    {
        print[i] = (number % 8) + 48;
        nb /= 8;
    }
    print[i] = '\0';
    return (ft_strrev(print));

}