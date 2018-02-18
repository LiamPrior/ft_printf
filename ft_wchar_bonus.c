/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wchar_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 16:00:03 by lprior            #+#    #+#             */
/*   Updated: 2018/02/17 22:11:26 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// char	*convert_uni(wchar_t wide)
// {
// 	char *new;

// 	new = ft_strnew(5);
// 	if (wide < 0x80)
// 		new[0] = ((wide >> 0) & 0x7F) | 0x00;
// 	else if (wide < 0x800)
// 	{
// 		new[0] = ((wide >> 6) & 0x1F) | 0xC0;
// 		new[1] = ((wide >> 0) & 0x3F) | 0x80;
// 	}
// 	else if (wide < 0x10000)
// 	{
// 		new[0] = ((wide >> 12) & 0x0F) | 0xE0;
// 		new[1] = ((wide >> 6) & 0x3F) | 0x80;
// 		new[2] = ((wide >> 0) & 0x3F) | 0x80;
// 	}
// 	else if (wide < 0x10FFFF)
// 	{
// 		new[0] = ((wide >> 18) & 0x07) | 0xF0;
// 		new[1] = ((wide >> 12) & 0x3F) | 0x80;
// 		new[2] = ((wide >> 6) & 0x3F) | 0x80;
// 		new[3] = ((wide >> 0) & 0x3F) | 0x80;
// 	}
// 	return (new);
// }

char *ft_unitoa(wint_t wide)
{
    // printf("IM OVER HERE NOW!\n");
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

void ft_print_wchar(t_flags *tools, va_list ap)
{
    wchar_t c;

    c = va_arg(ap, wint_t);
    if (tools->negative == 0)
        while (tools->width-- > 0)
            ft_putchar(' ');
    ft_putstr(ft_unitoa(c));
    if (tools->negative == 1)
        while (tools->width-- >= 0)
            ft_putchar(' ');
}
// void	print_wchar_str(t_flags *bag, va_list ap)
// {
// 	char	*s;
// 	wchar_t	*ws;

// 	ws = (wchar_t *)va_arg(ap, wchar_t *);
// 	if (if_unicode(bag, ws) == -1)
// 		return ;
// 	s = *ws == '\0' ? "\0" : convert_uni(*ws++);
// 	if (ws != NULL && ft_wstrlen(ws) == -1 && ARGUMENT != 7)
// 	{
// 		free(s);
// 		return ;
// 	}
// 	while (ws != NULL && *ws != '\0' && ARGUMENT == 7)
// 		s = ft_strjoin(s, convert_uni(*ws++));
// 	LEN = s == NULL ? 0 : ft_strlen(s);
// 	parse(bag);
// 	while (MINUS == false && WIDTH-- > 0)
// 		ZERO == true ? ft_putchar('0', bag) : ft_putchar(' ', bag);
// 	while (LEN-- > 0 && *s != '\0')
// 		ft_putchar(*s++, bag);
// 	while (WIDTH-- > 0)
// 		ft_putchar(' ', bag);
// }
void ft_print_wchar_str(t_flags *tools, va_list ap)
{
    wchar_t *w_str;
    char *str;

    w_str = (wchar_t *)va_arg(ap, wchar_t *);
    //null checker!
    str = ft_unitoa(*w_str++);

    // str = *w_str == '\0' ? "\0" : ft_unitoa(*w_str++);
	// if (w_str != NULL && ft_wstrlen(w_str) == -1 && tools->arg != 7)
	// {
	// 	free(str);
	// 	return ;
	// }
    // printf("HERE1\n");
    while (*w_str != '\0')// && tools->arg == 7)
    {
        str = ft_strjoin(str, ft_unitoa(*w_str++));
        // printf("str: [%s]\n", str);
    }
    // printf("HERE2\n");    
    tools->len = ft_strlen(str);
    tools->width -= tools->len;
    if (tools->negative == 0)
        while (tools->width-- > 0)
            ft_putchar(' ');
    // printf("HERE3\n");
    while (*str)
        ft_putchar(*str++);
    if (tools->negative == 1)
        while (tools->width-- >= 0)
            ft_putchar(' ');
}
