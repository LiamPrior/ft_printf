/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/07 18:26:23 by lprior            #+#    #+#             */
/*   Updated: 2018/02/13 15:51:49 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_check_signed_int(t_flags *tools, va_list ap)
{
    if (tools->brand == 'd' || tools->brand == 'i')
		return ((int)va_arg(ap, void*));
    return (0);
}

unsigned long long int ft_check_unsigned_int(t_flags *tools, va_list ap)
{
    if (tools->brand == 'U' || tools->brand == 'O')
		return ((unsigned long long int)va_arg(ap, void*));
    else if (tools->brand == 'u' || tools->brand == 'o' || tools->brand == 'X' 
            || tools->brand == 'x' || tools->brand == 'D')
		return ((unsigned long long int)va_arg(ap, void*)); 
    return ((unsigned long long int)NULL);
}


unsigned long long int ft_sort_unsigned_args(t_flags *tools, va_list ap)
{
    if (tools->arg == 1)
        return ((size_t)va_arg(ap, size_t));
    else if (tools->arg == 2)
        return ((uintmax_t)va_arg(ap, void*));
    else if (tools->arg == 3)
        return ((unsigned short int)va_arg(ap, void*));
    else if (tools->arg == 4)
       return ((unsigned long int)va_arg(ap, void*));
    else if (tools->arg == 5)
        return ((unsigned long long int)va_arg(ap, void*));
    else if (tools->arg == 6)
        return ((unsigned long long int)va_arg(ap, void*));  
    else
        return (0);
}
    
long long int ft_sort_signed_args(t_flags *tools, va_list ap)
{
    if (tools->arg == 1)
        return (va_arg(ap, size_t));
    else if (tools->arg == 2)
        return (va_arg(ap, intmax_t));
    else if (tools->arg == 3)
        return ((unsigned short int)va_arg(ap, void*));
    else if (tools->arg == 4)
       return ((long int)va_arg(ap, void*));
    else if (tools->arg == 5)
        return ((unsigned char)va_arg(ap, void*));
    else if (tools->arg == 6)
        return ((unsigned long long int)va_arg(ap, void*));
    else
        return (0);
}
//probably going to not use this.
void    ft_check_brand(t_flags *tools, long long int nb)
{

    nb = nb * 1;
    tools->prec = tools->prec * 1;


}
