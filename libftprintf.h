/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 09:43:15 by joapedro          #+#    #+#             */
/*   Updated: 2025/04/28 10:12:05 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int ft_putchar_fd(char c, int fd);
int ft_putstr(char *s, int fd);
int	ft_printf(const char *format, ...);

#endif
