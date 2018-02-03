/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 15:43:30 by lprior            #+#    #+#             */
/*   Updated: 2018/02/02 17:24:38 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <wchar.h>

int main()
{
    void   *x = "stringly";
    wchar_t xx = L'h';
	int i = 'c';

	printf("%c\n", i);
printf("[%s]\n", "swag");
printf("[%d]\n", xx);
printf("[%p]\n", x);
printf("[%d]\n", 1);
printf("[%D]\n", 1);
printf("[%i]\n", 1);
printf("[%o]\n", 1);
printf("[%O]\n", 1);
printf("[%u]\n", 1);
printf("[%U]\n", 1);
printf("[%x]\n", 1);
printf("[%X]\n", 1);
printf("[%c]\n", 'd');
printf("[%C]\n", 'd');

}
