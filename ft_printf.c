/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 22:02:29 by abdesala          #+#    #+#             */
/*   Updated: 2025/12/11 19:44:55 by abdesala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	ft_printf(const char *format, ...)
{
	char 	arg;
	char 	*str;
	int		value;
	va_list	args;
	va_start(args, format);
	int i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
            {
				arg = va_arg(args, int);
				ft_putchar(arg);
            }
			else if (format[i] == 's')
			{
				str = va_arg(args, char *);
				ft_putstr(str);
			}
			else if (format[i] == 'p')
			{
				value = va_arg(args, int);
				ft_putptr(value);
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				value = va_arg(args, int);
				ft_putnbr(value);
			}
			else if (format[i] == 'u')
			{
				value = va_arg(args, int);
				ft_putuns(value);
			}
			else if (format[i] == 'x')
			{
				value = va_arg(args, int);
				ft_puthex(value);
			}
			else if (format[i] == 'X')
			{
				value = va_arg(args, int);
				ft_print_HEXA(value);
			}
			else if (format[i] == '%')
			{
				arg = va_arg(args, int);
				ft_putchar('%');
			}
       }
	   else
			ft_putchar(format[i]);
		i++;
    }
	return 0;
}

int main(void)
{
   ft_printf("Hello %s! You are %d years old.\n", "Sam", 20);
}