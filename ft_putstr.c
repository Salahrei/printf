/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 23:24:35 by abdesala          #+#    #+#             */
/*   Updated: 2025/12/11 21:53:41 by abdesala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	if (!str)
		return (0);
	int	i;
	int count;

	count  = 0;
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (count);
}
