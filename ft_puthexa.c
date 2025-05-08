/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 14:26:33 by joapedro          #+#    #+#             */
/*   Updated: 2025/05/05 08:59:33 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long n)
{
	int		count;
	char	*hexa;

	hexa = "0123456789abcdef";
	count = 0;
	if (n >= 16)
	{
		count += ft_puthexa(n / 16);
	}
	count += ft_putchar(hexa[n % 16]);
	return (count);
}
