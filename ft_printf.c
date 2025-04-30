/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 09:46:32 by joapedro          #+#    #+#             */
/*   Updated: 2025/04/30 12:08:31 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/libft.h"

int	specifier_type(const char *specifier, va_list args)
{
	int	count;

	count = 0;
	if (specifier == 'c')
	{
		ft_putchar(va_arg(args, char));
		count++;
	}
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	va_start	(args, format);

	int i;
	int	count;

	i = 0;
	count = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
			{
				specifier_type(format[i], args);
				count++;
			}
		}
		i++;
		ft_putstr(format[i]);
		count++;
	}
	va_end(args);
}
int main()
{
	int		age = 30;
	char	name[] = "Joao";
	
	ft_printf("Hello my names is %s and im %d years old, name, age");
}