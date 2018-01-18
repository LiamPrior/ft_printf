/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 16:19:26 by ckrommen          #+#    #+#             */
/*   Updated: 2018/01/17 16:26:47 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define FLAGS sSpdDioOuUxXcC

# include "./libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <stdbool.h>

typedef struct	s_flag
{
	bool	plus;
	bool	minus;
	bool	zero;
	bool	space;
	bool	hash;
	bool	star;
	char	type;
	int		width;
	int		precision;
	int		argument;
	int		ret;
	int		len;
}				t_flag;

#endif
