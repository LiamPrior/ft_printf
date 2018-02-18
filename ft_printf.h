/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 16:19:26 by lprior	           #+#    #+#             */
/*   Updated: 2018/02/17 20:13:16 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <stdint.h>
# include <stdbool.h>
# include <wchar.h>
# include "libft/libft.h"
# include <stdio.h>

typedef struct	s_flags
{
	int		positive;
	int		negative;
	int		zeros;
	int		space;
	int		hashtag;
	char	brand;
	int		width;
	int		prec;
	int		arg;
//	int		ret;
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
void	ft_print_percent(t_flags *tools);
void 	ft_check_type2(char format, t_flags *tools, va_list ap);
void    ft_parse_char_tool(t_flags *tools);
void	ft_parse_int_tools(t_flags *tools, long int number);
int 	ft_check_signed_int(t_flags *tools, va_list ap);
long long int ft_sort_signed_args(t_flags *tools, va_list ap);
unsigned long long int ft_sort_unsigned_args(t_flags *tools, va_list ap);
unsigned long long int ft_check_unsigned_int(t_flags *tools, va_list ap);
void 	ft_print_zeros(t_flags *tools);
void 	ft_print_int2(t_flags *tools, long long int number, int dis);
void    ft_print_prec(t_flags *tools);
void    ft_parse_unsigned_int_tools(t_flags *tools, unsigned long long int number);
char 	*ft_otoa(unsigned long int number);
char 	*ft_htoa(unsigned long int number, t_flags *tools);
char 	*ft_ullitoa(unsigned long long int number);
char 	*ft_ptoa(unsigned long int number, t_flags *tools);
void    t_pui2(t_flags *tools, unsigned long long int num, int dis, char *dt_hold);
void	ft_print_address(t_flags *tools, unsigned long long int number);
char	*ft_uitoa(unsigned int nbr);
void	ft_putwchar(wint_t c);
void	ft_unitoa(wint_t letter);


#endif
