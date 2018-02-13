/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 16:19:26 by lprior	           #+#    #+#             */
/*   Updated: 2018/02/12 12:36:32 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <stdbool.h>

typedef struct	s_flags
{
	int		positive;
	int		negative;
	int		zeros;
	int		space;
	int		hash;
	char	brand;
	int		width;
	int		prec;
	int		arg;
	int		ret;
	int		len;
}				t_flags;

int		ft_printf(const char *format, ...);
int		ft_parse_format_print(char *format, va_list ap, t_flags *tools);
void	ft_build_tools(t_flags *tools);
void	ft_print(int start, int end, char *format);
void	ft_parse_flags(char *format, int *i,t_flags *tools, va_list ap);
void	ft_check_fwap(char *format, int *i, t_flags *tools);
void 	ft_check_args(char *format, int *i, t_flags *tools);
void    ft_check_width(char *format, int *i, t_flags *tools);
void    ft_check_prec(char *format, int *i, t_flags *tools);
void    ft_check_flags(char *format, int *i, t_flags *tools);
void 	ft_parse_flags2(char *format, int *i, t_flags *tools);
void 	ft_check_type(char format, t_flags *tools, va_list ap);
void	ft_print_string(t_flags *tools, va_list ap);
void	ft_print_wchar(t_flags *tools, va_list ap);
void	ft_print_wchar_str(t_flags *tools, va_list ap);
void	ft_print_pointer(t_flags *tools, va_list ap);
void	ft_print_int(t_flags *tools, va_list ap);
void	ft_print_unsigned_int(t_flags *tools, va_list ap);
void	ft_print_char(t_flags *tools, va_list ap);
void	ft_print_precision(t_flags *tools, va_list ap);
void	ft_print_binary(t_flags *tools, va_list ap);
void 	ft_check_type2(char format, t_flags *tools, va_list ap);
void    ft_parse_char_tool(t_flags *tools);
void	ft_parse_int_tools(t_flags *tools, long int number);
int ft_check_signed_int(t_flags *tools, va_list ap);
long long int ft_sort_signed_args(t_flags *tools, va_list ap);
unsigned long long int ft_sort_unsigned_args(t_flags *tools, va_list ap);
unsigned long long int ft_check_unsigned_int(t_flags *tools, va_list ap);
void 	ft_print_zeros(t_flags *tools);
void 	ft_print_int2(t_flags *tools, long long int number, int dis);
void    ft_print_prec(t_flags *tools);
void    ft_parse_unsigned_int_tools(t_flags *tools, unsigned long long int nb);
void    ft_check_brand(t_flags *tools, long long int nb);

#endif
