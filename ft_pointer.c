/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 08:53:49 by joapedro          #+#    #+#             */
/*   Updated: 2025/05/05 08:56:50 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(void *ptr)
{
	unsigned long	address;
	int				count;

	address = (unsigned long)ptr;
	count = 0;
	if (!ptr)
	{
		return (ft_putstr("(nil)"));
	}
	count += ft_putstr("0x");
	count += ft_puthexa(address);
	return (count);
}
