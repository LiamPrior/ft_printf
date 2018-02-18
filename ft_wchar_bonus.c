/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wchar_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 16:00:03 by lprior            #+#    #+#             */
/*   Updated: 2018/02/17 23:48:06 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_unitoa(wint_t wide)
{
	char *fake_wide;

	fake_wide = ft_strnew(5);
	if (wide < 0x80)
		fake_wide[0] = wide;
	else if (wide < 0x800)
	{
		fake_wide[0] = (((wide >> 6) & 0x1F) | 0xC0);
		fake_wide[1] = (((wide >> 6) & 0x3F) | 0x80);
	}
	else if (wide < 0x10000)
	{
		fake_wide[0] = (((wide >> 12) & 0x0F) | 0xE0);
		fake_wide[1] = (((wide >> 6) & 0x3F) | 0x80);
		fake_wide[2] = (((wide >> 0) & 0x3F) | 0x80);
	}
	else if (wide < 0x10FFFF)
	{
		fake_wide[0] = (((wide >> 18) & 0x07) | 0xF0);
		fake_wide[1] = (((wide >> 12) & 0x3F) | 0x80);
		fake_wide[2] = (((wide >> 6) & 0x3F) | 0x80);
		fake_wide[3] = (((wide >> 0) & 0x3F) | 0x80);
	}
	return (fake_wide);
}

void	ft_print_wchar(t_flags *tools, va_list ap)
{
	wchar_t	c;

	c = va_arg(ap, wint_t);
	if (tools->negative == 0)
		while (tools->width-- > 0)
			ft_putchar(' ');
	ft_putstr(ft_unitoa(c));
	if (tools->negative == 1)
		while (tools->width-- >= 0)
			ft_putchar(' ');
}

void	ft_print_wchar_str(t_flags *tools, va_list ap)
{
	wchar_t	*w_str;
	char	*str;

	w_str = (wchar_t *)va_arg(ap, wchar_t *);
	str = ft_unitoa(*w_str++);
	if (ft_strlen(str) > 1 && tools->arg != 7)
		return ;
	while (*w_str != '\0')
		str = ft_strjoin(str, ft_unitoa(*w_str++));
	tools->len = ft_strlen(str);
	tools->width -= tools->len;
	if (tools->negative == 0)
		while (tools->width-- > 0)
			ft_putchar(' ');
	ft_putstr(str);
	if (tools->negative == 1)
		while (tools->width-- >= 0)
			ft_putchar(' ');
}
