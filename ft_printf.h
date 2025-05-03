/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 09:43:15 by joapedro          #+#    #+#             */
/*   Updated: 2025/05/02 12:48:25 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_printf(const char *format, ...);
int	ft_unsigned_putnbr(unsigned int n);
int	ft_puthexa(unsigned long n);
int ft_puthexa_big(unsigned long n);
int ft_pointer(void *ptr);

#endif
