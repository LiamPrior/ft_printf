/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 16:19:26 by ckrommen          #+#    #+#             */
/*   Updated: 2018/01/21 20:43:17 by lprior           ###   ########.fr       */
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

#endif
