/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 16:30:54 by ckrommen          #+#    #+#             */
/*   Updated: 2018/01/17 19:09:49 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char *ft_remalloc(char *str, int size)
{
	char *new;

	if (str)
	{
		new = ft_strnew(ft_strlen(str) + size);
		ft_memset((void *)new, '.', ft_strlen(str) + (size - 1));
		new = ft_strcpy(new, str);
		ft_strdel(&str);
		return (new);
	}
	return (NULL);
}

char	*parse_flags2(char *flag, va_list ap)
{
	if (*flag == 'u')
		return ("UNSIGNED_INT");
	else if (*flag == 'U')
		return ("UNSIGNED_INT");
	else if (*flag == 'x')
		return (ft_itoa(va_arg(ap, int)));
	else if (*flag == 'X')
		return (ft_itoa(va_arg(ap, int)));
	else if (*flag == 'c')
		return (va_arg(ap, char *));
	else if (*flag == 'C')
		return ("BROKEN");
	else
		return ("END");
}


char	*parse_flags(char *flag, va_list ap)
{
	if (*flag == 's')
		return (va_arg(ap, char *));
	else if (*flag == 'S')
		return ("");
	else if (*flag == 'p')
		return (va_arg(ap, char *));
	else if (*flag == 'd')
		return (ft_itoa(va_arg(ap, int)));
	else if (*flag == 'D')
		return ("LONG_INT");
	else if (*flag == 'i')
		return (ft_itoa(va_arg(ap, int)));
	else if (*flag == 'o')
		return (ft_itoa(va_arg(ap, int)));
	else if (*flag == 'O')
		return ("LONG_INT");
	else
		return (parse_flags2(flag, ap));
}

char	*parse_format(va_list ap, char *format)
{
	t_flags sack;
	int i;
	int start;

	i = 0;
	while (format)
	{
		if (format[i] == "%")
		{
			
			ft_putchar(format[i])
		}
	}
}

char *ft_printf(const char *format, ...)
{
	va_list		ap;
	char buffer[1024];

	va_start(ap, str);
	if (!parse_format(ap, (char *)format))
		return (0);
}

int main(void)
{
	char *str;
	
	str = ft_strnew(7);
	str = "string\0";
	ft_printf("%s%s%", str);
	return 0;
}

/*
char	1 byte	-128 to 127 or 0 to 255
unsigned char	1 byte	0 to 255
signed char	1 byte	-128 to 127
int	2 or 4 bytes	-32,768 to 32,767 or -2,147,483,648 to 2,147,483,647
unsigned int	2 or 4 bytes	0 to 65,535 or 0 to 4,294,967,295
short	2 bytes	-32,768 to 32,767
unsigned short	2 bytes	0 to 65,535
long	4 bytes	-2,147,483,648 to 2,147,483,647
unsigned long	4 bytes	0 to 4,294,967,295
float	4 byte	1.2E-38 to 3.4E+38	6 decimal places
double	8 byte	2.3E-308 to 1.7E+308	15 decimal places
long double	10 byte	3.4E-4932 to 1.1E+4932	19 decimal places
unsigned long long 18,446,744,073,709,551,615.
\a	audible alert
\b	backspace
\f	form feed
\n	newline, or linefeed
\r	carriage return
\t	tab
\v	vertical tab
\\	backslash


%d %i     Decimal signed integer.
%o      Octal integer.
%x %X     Hex integer.
%u      Unsigned integer.
%c      Character.
%s      String. See below.
%f      double
%e %E     double.
%g %G     double.
%p        pointer.
%n      Number of characters written by this printf.
No argument expected.  
% %%. No argument expected.
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
*/
