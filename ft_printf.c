/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 16:30:54 by lprior            #+#    #+#             */
/*   Updated: 2018/01/22 18:26:55 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// char *ft_remalloc(char *str, int size)
// {
// 	char *new;

// 	if (str)
// 	{
// 		new = ft_strnew(ft_strlen(str) + size);
// 		ft_memset((void *)new, '.', ft_strlen(str) + (size - 1));
// 		new = ft_strcpy(new, str);
// 		ft_strdel(&str);
// 		return (new);
// 	}
// 	return (NULL);
// }

void	ft_build_tools(t_flags *tools)
{
	tools->positive = 0;
	tools->space = 0;
	tools->hash = 0;
	tools->zero = 0;
	tools->negative = 0;
	tools->brand = 0;
	tools->width = 0;
	tools->prec = 0;
	tools->arg = 0;
	tools->ret = 0;
	tools->len = 0;
}

char	*ft_parse_format(char *format)
{
	t_flags tools;
	// t_flags *tools;
	int i;
	int start;

	i = 0;
	start = 0;
	// tools = (t_flags *)malloc(t_flags);
	while (format[i])
	{
		if (format[i] == '%')
		{
			ft_build_tools(&tools);
			write (1, format, i - start);
			// while (format[start++] < format[i])
			// 	ft_putchar(format[start]);
			i += 1;
			ft_parse_flags(format, &i, &tools);
			//ft_parse_conv(format, ap);
			start = i;
		}
		if (format[i] != '\0')
			i++;
	}
	return (0);
}

char *ft_printf(const char *format, ...)
{
	//va_list		ap;

	//va_start(ap, str);
	if (!ft_parse_format((char *)format))
		return (0);
	return ("swags");
}

int main(void)
{
	char *str;
	
	str = ft_strnew(7);
	str = "string\0";
	ft_printf("hello %d\n", 12345667890);
	return 0;
}


/*
**char	1 byte	-128 to 127 or 0 to 255
**unsigned char	1 byte	0 to 255
**signed char	1 byte	-128 to 127
**int	2 or 4 bytes	-32,768 to 32,767 or -2,147,483,648 to 2,147,483,647
**unsigned int	2 or 4 bytes	0 to 65,535 or 0 to 4,294,967,295
**short	2 bytes	-32,768 to 32,767
**unsigned short	2 bytes	0 to 65,535
**long	4 bytes	-2,147,483,648 to 2,147,483,647
**unsigned long	4 bytes	0 to 4,294,967,295
**float	4 byte	1.2E-38 to 3.4E+38	6 decimal places
**double	8 byte	2.3E-308 to 1.7E+308	15 decimal places
**long double	10 byte	3.4E-4932 to 1.1E+4932	19 decimal places
**unsigned long long 18,446,744,073,709,551,615.
**\a	audible alert
**\b	backspace
**\f	form feed
**\n	newline, or linefeed
**\r	carriage return
**\t	tab
**\v	vertical tab
**\\	backslash
**
**
**%d %i     Decimal signed integer.
**%o      Octal integer.
**%x %X     Hex integer.
**%u      Unsigned integer.
**%c      Character.
**%s      String. See below.
**%f      double
**%e %E     double.
**%g %G     double.
**%p        pointer.
**%n      Number of characters written by this printf.
**No argument expected.  
**% %%. No argument expected.
*/

/*
** Length code chart:
** 0 = unset
** 1 = h (short int/unsigned short int)
** 2 = hh (signed char/unsigned char)
** 3 = l (long int/unsigned long int)
** 4 = ll (long long int/unsigned long long int)
** 5 = j (intmax_t/uintmax_t)
** 6 = z (size_t/ssize_t)
**
**||The most important is a way to specify
**||how many digits appear after the decimal point.
**||This number is called the precision.
**
*/
