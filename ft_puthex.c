/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 23:36:10 by abdesala          #+#    #+#             */
/*   Updated: 2025/12/11 21:54:56 by abdesala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long nb)
{
	int c;
	int count;

	count = 0;
	if (nb >= 16)
	{
		ft_puthex(nb / 16);
	}
	c = "0123456789abcdef"[nb % 16];
	write(1, &c, 1);
	return(count);
}
