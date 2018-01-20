/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 15:36:04 by lprior            #+#    #+#             */
/*   Updated: 2018/01/20 11:59:58 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*parse_conv2(char *flag, va_list ap)
{
	if (*flag == 'u')
		return ("UNSIGNED_INT");
	else if (*flag == 'U')
		return ("UNSIGNED_INT");
	else if (*flag == 'x')
		return (ft_itoa(va_arg(ap, int)));
	else if (*flag == 'X')
		return (ft_itoa(va_arg(ap, int)));
	else if (*flag == 'c')
		return (va_arg(ap, char *));
	else if (*flag == 'C')
		return ("BROKEN");
	else
		return ("END");
}

char	*parse_conv(char *flag, va_list ap)
{
	if (*flag == 's')
		return (va_arg(ap, char *));
	else if (*flag == 'S')
		return ("");
	else if (*flag == 'p')
		return (va_arg(ap, char *));
	else if (*flag == 'd')
		return (ft_itoa(va_arg(ap, int)));
	else if (*flag == 'D')
		return ("LONG_INT");
	else if (*flag == 'i')
		return (ft_itoa(va_arg(ap, int)));
	else if (*flag == 'o')
		return (ft_itoa(va_arg(ap, int)));
	else if (*flag == 'O')
		return ("LONG_INT");
	else
		return (parse_flags2(flag, ap));
}
