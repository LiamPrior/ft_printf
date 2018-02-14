
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 15:43:30 by lprior            #+#    #+#             */
/*   Updated: 2018/02/08 16:41:04 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <wchar.h>
#include "ft_printf.h"
#include  "libft/libft.h"

char	*convert_hex(unsigned long int nb, char type)
{
	char		*print;
	int			i;

	i = 0;
	print = ft_memalloc(21);
	if (nb == 0)
		print[i] = '0';
	if (type == 'x' || type == 'p')
		while (nb != 0)
		{
			print[i++] = "0123456789abcdef"[nb % 16];
			nb /= 16;
		}
	else
		while (nb != 0)
		{
			print[i++] = "0123456789ABCDEF"[nb % 16];
			nb /= 16;
		}
	return (ft_strrev(print));
}

int main()
{
    void   *x = "stringly";
    wchar_t xx = L'h';
    int i = 'c';
// printf("[%.4c]\n", 'c');
// printf("[%.-4d]\n", -119);
// printf("[%.c]\n", i);
// printf("[%s]\n", "swag");
// printf("[%d]\n", xx);
// printf("[%p]\n", x);
// printf("[%d]\n", 1);
// printf("[%D]\n", 1);
// printf("[%i]\n", 1);
// printf("[%o]\n", 1);
// printf("[%O]\n", 1);
// printf("[%u]\n", 1);
// printf("[%U]\n", 1);
// printf("[%x]\n", 1);
// printf("[%X]\n", 1);
// printf("[%c]\n", 'd');
// printf("[%C]\n", 'd');
printf("%s\n", convert_hex(100, 'x'));
}
