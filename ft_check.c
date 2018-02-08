/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/07 18:26:23 by lprior            #+#    #+#             */
/*   Updated: 2018/02/07 20:05:34 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// long long int	assign_value(t_flags *bag, va_list ap)
// {
// 	if (TYPE != 'i' && TYPE != 'd' && TYPE != 'o' && TYPE != 'u' && TYPE != 'x'
// 		&& TYPE != 'X')
// 		ARGUMENT = 0;
// 	if (ARGUMENT == 1)
// 		return (RETURN_H);
// 	if (ARGUMENT == 2)
// 		return (RETURN_HH);
// 	if (ARGUMENT == 3 || TYPE == 'D')
// 		return (RETURN_L);
// 	if (ARGUMENT == 4)
// 		return (RETURN_LL);
// 	if (ARGUMENT == 5)
// 		return (RETURN_J);
// 	if (ARGUMENT == 6)
// 		return (RETURN_Z);
// 	if (TYPE == 'd' || TYPE == 'i')
// 		return ((int)va_arg(ap, void*));
// 	if (TYPE == 'U' || TYPE == 'O')
// 		return ((unsigned long long int)va_arg(ap, void*));
// 	if (TYPE == 'u' || TYPE == 'o' || TYPE == 'X' || TYPE == 'x')
// 		return ((unsigned int)va_arg(ap, void*));
// 	return ((long long int)NULL);
// }
// #define T			(TYPE == 'i' || TYPE == 'd')
// #define ARG			(va_arg(ap, void*))
// #define RETURN_H 	T ? (short int)ARG : (unsigned short int)ARG
// #define RETURN_HH	T ? (char)ARG : (unsigned char)ARG
// #define RETURN_L	(T || TYPE == 'D') ? (long int)ARG : (unsigned long int)ARG
// #define RETURN_LL	T ? (long long int)ARG : (unsigned long long int)ARG
// #define RETURN_J	T ? (intmax_t)ARG : (uintmax_t)ARG
// #define RETURN_Z	(size_t)va_arg(ap, size_t)

int ft_check_int(t_list *tools)
{
    if (TYPE != 'i' && TYPE != 'd' && TYPE != 'o' && TYPE != 'u' && TYPE != 'x'
        && TYPE != 'X')
        tools->arg = 0;
    if (tools->arg == 0)
    {
        if (tools->brand == 'd' || tools->brand == 'i')
		    return ((int)va_arg(ap, void*));
	    else if (tools->brand == 'U' || tools->brand == 'O')
		    return ((unsigned long long int)va_arg(ap, void*));
        else if (tools->brand == 'u' || tools->brand == 'o' || tools->brand == 'X' 
            || tools->brand == 'x')
		    return ((unsigned int)va_arg(ap, void*)); 
    }
    return ((long long int)NULL);
}    
long long int ft_sort_unsigned_args(t_flags *tools, va_list ap)
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
        return ((unsigned long long int)va_arg(ap, void*))
    else if (tools->arg == 6)
        return ((unsigned long long int)va_arg(ap, void*));  
}
long long int ft_sort_signed_args(t_flags *tools, va_list ap)
{
    if (tools->arg == 1)
        return ((size_t)va_arg(ap, size_t));
    else if (tools->arg == 2)
        return ((intmax_t)va_arg(ap, void*));
    else if (tools->arg == 3)
        return ((short int)va_arg(ap, void*));
    else if (tools->arg == 4)
       return ((long int)va_arg(ap, void*));
    else if (tools->arg == 5)
        return ((long long int)va_arg(ap, void*))
    else if (tools->arg == 6)
        return ((long long int)va_arg(ap, void*));
}


