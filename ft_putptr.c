/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 17:46:17 by abdesala          #+#    #+#             */
/*   Updated: 2025/12/11 22:17:26 by abdesala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <unistd.h>

int ft_putstr(char *str)
{
    int i = 0;
    if (!str)
        return 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    return i;
}

int ft_puthex(unsigned long nb)
{
    int count = 0;
    char c;

    if (nb >= 16)
        count += ft_puthex(nb / 16);
    c = "0123456789abcdef"[nb % 16];
    write(1, &c, 1);
    count++;
    return count;
}

int ft_printp(void *ptr)
{
    int res = 0;
    unsigned long nbr = (unsigned long)ptr;

    res += ft_putstr("0x");
    res += ft_puthex(nbr);
    return res;
}

#include <stdio.h>

int main(void)
{
    int a = 3;
    printf("%d\n", ft_printp(&a));
    printf("%p\n", (void *)&a);
}
