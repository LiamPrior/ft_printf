/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_tools.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 19:29:14 by lprior            #+#    #+#             */
/*   Updated: 2018/02/07 19:26:01 by lprior           ###   ########.fr       */
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

void    ft_parse_char_tool(t_flags *tools)
{
    if (tools->prec < tools->len && tools->prec >= 0)
        tools->len = tools->prec;
    if (tools->prec >= 0 || tools->width >= 0)
        tools->width -= tools->len;
}
    
// void			parse_int(t_flags *bag, long int nb)
// {
// 	char	*len;

// 	len = ft_itoa(nb);
// 	LEN = (nb == 0 && IF_PREC == true ? 0 : ft_strlen(len));
// 	free(len);
// 	nb < 0 ? LEN-- : LEN;
// 	MINUS = WIDTH < 0 || (PRECISION < 0 && STAR == false) ? true : MINUS;
// 	WIDTH = WIDTH < 0 ? WIDTH * -1 : WIDTH;
// 	PRECISION = PRECISION < 0 && STAR == false ? PRECISION * -1 : PRECISION;
// 	PRECISION -= LEN;
// 	WIDTH -= PRECISION > 0 ? PRECISION + LEN : LEN;
// 	PLUS == true || nb < 0 ? WIDTH-- : WIDTH;
// 	ZERO = (IF_PREC == true) && STAR == false ? false : ZERO;
// 	WIDTH = SPACE == true && WIDTH < 1 && nb > 0 ? 1 : WIDTH;
// 	SPACE = nb < 0 ? false : SPACE;
// }
void    ft_parse_int2_tools(t_flags *tools, long int number)
{
    if (tools->prec >= 0)
        tools->width -= (tools->prec += tools->len);
    else
        tools->width -= tools->len;
    if (tools->positive == 1 || number < 0)
        tools->width--;
    if (tools->prec >= 1)
        tools->zeros = 0;
    if (tools->space == 1 && tools->width < 1 && number > 0)
        tools->width = 1;
    if (number < 0)
        tools->space = 0;
}

void    ft_parse_int_tools(t_flags *tools, long int number)
{
    char *length;

    length = ft_itoa(number);
    if (number == 0 && tools->prec >= 1)
        tools->len = 0;
    else
        tools->len = ft_strlen(length);
    free(length);
    if (number < 0)
        tools->len--;
    if (tools->width < 0)
    {
        tools->negative = 1;
        tools->width *= -1;
    }   
    tools->prec -= tools->len;
    ft_parse_int2_tools(tools, number);
}


// void			ft_parse_int(t_flags *tools, long int number)
// {
//     char *length;

//     length = ft_itoa(number);
//     if (number == 0 && tools->ifprec == 1)
//         tools->len = 0;
//     else
//         tools->len = ft_strlen(length);
//     free(length);
//     if (number < 0)
//         tools->len--;
//     if (tools->width < 0 || tools->prec < 0)
//         tools->negative = 1;
//     if (tools->width < 0)
//         tools->width *= -1;
//     if (tools->prec < 0)
//         tools->prec *= -1;
//     tools->prec -= tools->len;
//     if (tools->prec > 0)
//         tools->width -= (tools->prec += tools->len);
//     else
//         tools->width -= tools->len;
//     if (tools->positive == 1 || number < 0)
//         tools->width--;
//     if (tools->ifprec == 1)
//         tools->zeros = 0;
//     if (tools->space == 1 && tools->width < 1 && number > 0)
//         tools->width = 1;
//     if (number < 0)
//         tools->space = 0;
// }

// void    ft_parse_char(t_flags *tools)
// {
//     if (tools->prec < 0)
//         tools->zeros = 0;
//     if (tools->prec < tools->len && tools->ifprec == 1)
//         tools->len = tools->prec;
//     if (tools->width < 0 && tools->type == 'c')
//         tools->width *= -1;
//     if (tools->prec < 0)
//         tools->width = tools->prec * -1;
//     else
//         tools->width -= tools->len;
//     if (tools->brand == 'c' && tools->prec < 0)
//     {
//         tools->width = ((tools->prec * -1) - 1);
//         tools->negative = 1;
//     }
//     if (tools->ifprec == 1 && tools->prec == 0 && tools->brand == 'c')
//         tools->width -= 1;
// }