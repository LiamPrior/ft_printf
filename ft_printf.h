/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 16:19:26 by lprior	           #+#    #+#             */
/*   Updated: 2018/01/22 11:43:37 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define FLAGS sSpdDioOuUxXcC

# include "./libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <stdbool.h>

typedef struct	s_flags
{
	bool	positive;
	bool	negative;
	bool	zero;
	bool	space;
	bool	hash;
	char	brand;
	int		width;
	int		prec;
	int		arg;
	int		ret;
	int		len;
}				t_flags;

char	*ft_printf(const char *format, ...);
char	*parse_format(va_list ap, char *format);
void	ft_build_tools(t_flags *tools);
void	ft_parse_flags(char *format, int *i,t_flags *tools);
void	ft_fwap(char *format, int *i, t_flags *tools);
void 	ft_args(char *format, int *i, t_flags *tools);
void    ft_width(char *format, int *i, t_flags *tools);
void    ft_prec(char *format, int *i, t_flags *tools);
void    ft_flags(char *format, int *i, t_flags *tools);
void 	ft_parse_flags2(char *format, int *i, t_flags *tools);
void 	ft_type(char format, t_flags *tools);
void 	ft_type2(char format, t_flags *tools);



#endif
