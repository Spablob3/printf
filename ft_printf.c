/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 09:46:32 by joapedro          #+#    #+#             */
/*   Updated: 2025/05/02 13:03:49 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	specifier_type(char specifier, va_list args)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (specifier == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (specifier == 'd' || specifier == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (specifier == '%')
		count += ft_putchar('%');
	else if (specifier == 'u')
		count += ft_unsigned_putnbr(va_arg(args, unsigned int));
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			i;
	int			count;

	va_start (args, format);
	i = 0;
	count = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			count += specifier_type(format[i], args);
		}
		else
		{
			ft_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}

int main()
{
	char	name[] = "Joao";
	int		age = 30;
	ft_printf("Hello my name is %s and i have %d%% of battery OLA\n", name, age);
	printf("Hello my name is %s and i have %d%% of battery\n", name, age);

	ft_printf("Unsigned int: %u\n", -1);
	printf("Unsigned int: %u\n", -1);

	
}
