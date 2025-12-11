/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 21:59:44 by abdesala          #+#    #+#             */
/*   Updated: 2025/12/11 18:19:21 by abdesala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int     ft_printf(const char *, ...);
void    ft_print_HEXA(unsigned int nb);
void	ft_putchar(char c);
int     ft_puthex(unsigned long nb);
void	ft_putnbr(int nb);
int	    ft_putstr(char *str);
void    ft_putuns(unsigned int nb);

#endif