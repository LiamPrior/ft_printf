/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/04 13:34:20 by lprior            #+#    #+#             */
/*   Updated: 2018/02/08 17:37:38 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
    // printf("string 0 padding = [%05s]\n", "swag");
    // printf("%.2s\n", "paulina")
    // printf("%c\n", 'c');
    // ft_printf("[%d]\n", 'a');
    // printf("[%d]\n", 'a');
    // printf("[%5c]", 'c');
    // ft_printf("[%5c]", 'c');
    // printf("only one negative right = [%05d]\n", -97);
    // printf("only one negative left = [%-5d]\n", 97);
    // printf("positive right negative = [%+05d]\n", -97);
    // printf("negative right negative = [%-5d]\n", -97);
    // printf("negative right positive = [%-5d]\n", +97);
    // printf("positive right positive = [%+05d]\n", +97);
    // printf("positive negative then right negative = [%+-5d]\n", -97);
    // printf("negative positive then right negative = [%-+5d]\n", -97);
    // printf("negative positive then right positive = [%-+5d]\n", 97);
    // printf("positive negative then right positive = [%+-5d]\n", 97);
    // printf("space negative zero width 2 right normal = [% -02d]\n", 97);
    // printf("negative space right normal = [%- d]\n", 97);
    // printf("space negative right normal = [% -d]\n", 97);
    // printf("space negative right normal = [% +d]\n", 97);
    // printf("negative space width right normal = [%- 5d]\n", 97);
    // printf("space negative wdith right normal = [% -5d]\n", 97);
    // ft_printf("[%d]", 'a');
    // ft_printf("[%+5.3d]\n", -10);
    // printf("[%+5.3d]\n", -10);
    // ft_printf("[%.3d]\n", -10);
    // printf("[%.3d]\n", -10);
    // ft_printf("[%D]\n", -10);
    // printf("[%D]\n", -10);
    // printf("%+5d\n", 97);
    // printf("[% 5d]\n", 10);
    // ft_printf("[% 5d]\n", 10);
    // printf("[%05i]\n", 10);
    // ft_printf("[%05d]\n", 10);

	// printf("' ':				[% d]\n", -12);
	// ft_printf("' ':				[% d]\n", -12);
	// printf("10.6:				[% 10.6d]\n", 12);
	// ft_printf("10.6:				[% 10.6d]\n", 12);
	// printf("0 10.6:				[%0 10.6d]\n", 12);
	// ft_printf("0 10.6:				[%0 10.6d]\n", 12);
	// printf("-+10.5:				[%-+10.5d]\n", -12);
	// ft_printf("-+10.5:				[%-+10.5d]\n", -12);
	// printf("zero:				[%0i]\n", 12);
	// ft_printf("zero:				[%0i]\n", 12);
	// printf("width 10:			[%10i]\n", 12);
	// ft_printf("width 10:			[%10i]\n", 12);
	// ft_printf("minus and width 10:		[%-10i]\n", 12);
	// printf("minus and width 10:		[%-10i]\n", 12);
	// ft_printf("precyzja 1:			[%.1i]\n", 12);
	// printf("precyzja 1:			[%.1i]\n", 12);
	// ft_printf("width 10 prec 1:		[%10.1i]\n", 12);
	// printf("width 10 prec 1:		[%10.1i]\n", 12);
	// ft_printf("width 10 prec 6:		[%10.6i]\n", 12);
	// printf("width 10 prec 6:		[%10.6i]\n", 12);
	// ft_printf("- width 10 prec 6:		[%-10.6i]\n", 12);
	// printf("- width 10 prec 6:		[%-10.6i]\n", 12);
	// ft_printf("0 width 4 prec 3:		[%04.3d]\n", -1);
	// printf("0 width 4 prec 3:		[%04.3d]\n", -1);
	// ft_printf("+ width 10 prec 5:		[%+10.5d]\n", 25);
	// printf("+ width 10 prec 5:		[%+10.5d]\n", 25);
	// ft_printf("width 10 prec 5:		[%+10.5d]\n", -25);
	// printf("width 10 prec 5:		[%+10.5d]\n", -25);
	// ft_printf("0 width 3 prec 2:		[%03.2d]\n", -1);
	// printf("0 width 3 prec 2:		[%03.2d]\n", -1);
	// ft_printf("prec 10:			[%.10d]\n", -12);
	// printf("prec 10:			[%.10d]\n", -12);
	ft_printf("width 5 prec .:			[%5.d]\n", 0);
	printf("width 5 prec .:			[%5.d]\n", 0);
	// ft_printf("42:				[%d]\n", 42);
	// printf("42:				[%d]\n", 42);
	// ft_printf("m: 0 width 3:			[% 04d]\n", 1);
	// printf("t: 0 width 3:			[% 04d]\n", 1);
	ft_printf("width 4 prec.:			[%4.d]\n", 0);
	printf("width 4 prec.:			[%4.d]\n", 0);
	// ft_printf("m: 0 width 10:			[%010d]\n", 0);
	// printf("t: 0 width 10:			[%010d]\n", 0);
	ft_printf("0 width 5:			[%05d]\n", -42);
	printf("0 width 5:			[%05d]\n", -42);
	// ft_printf("- width 5:			[%-5d]\n", -42);
	// printf("- width 5:			[%-5d]\n", -42);
	// ft_printf("+ width 10 prec 5:		[%+10.5d]\n", 4242);
	// printf("+ width 10 prec 5:		[%+10.5d]\n", 4242);
	ft_printf("0 width 3 prec 2:		[%03.2d]\n", 0);
	printf("0 width 3 prec 2:		[%03.2d]\n", 0);
	// ft_printf("0 width 3 prec 2:		[%03.2d]\n", -1);
	// printf("0 width 3 prec 2:		[%03.2d]\n", -1);
	// ft_printf("space:				[% d]\n", 42);
	// printf("space:				[% d]\n", 42);
	// ft_printf("plus:				[%+d]\n", 0);
	// printf("plus:				[%+d]\n", 0);
	// ft_printf("width 10:			[%10d]\n", 0);
	// printf("width 10:			[%10d]\n", 0);
	ft_printf("prec 5:				[%.5d]\n", 0);
	printf("prec 5:				[%.5d]\n", 0);
	// ft_printf("' ' width 5:			[% 5d]\n", 4);
	// printf("' ' width 5:			[% 5d]\n", 4);
	// ft_printf("' ' prec 5:			[%.5d]\n", 4);
	// printf("' ' prec 5:			[%.5d]\n", 4);
	ft_printf("' ' prec 5:			[%.5d]\n", 0);
	printf("' ' prec 5:			[%.5d]\n", 0);
	// ft_printf("0+ width 5:			[%0+5d]\n", -1);
	// printf("0+ width 5:			[%0+5d]\n", -1);
	// ft_printf("prec 0:				[%.0d]\n", -1);
	// printf("prec 0:				[%.0d]\n", -1);
	// ft_printf("++ width 10:			[%++10d]\n", -42);
	// printf("++ width 10:			[%++10d]\n", -42);
	// ft_printf("width 10:			[%10d]\n", -42);
	// printf("width 10:			[%10d]\n", -42);
	// ft_printf("+0 width 10:			[%+010d]\n", +42);
	// printf("+0 width 10:			[%+010d]\n", +42);
	// ft_printf("+0 width 4:			[%+04d]\n", 42);
    // printf("+0 width 4:			[%+04d]\n", 42);
    ft_printf("[%.3d]\n", 0);
    printf("[%.3d]\n", 0);




    return (0);
}