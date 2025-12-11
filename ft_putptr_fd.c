/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:03:10 by abouanan          #+#    #+#             */
/*   Updated: 2025/12/11 17:52:57 by abdesala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

static int ft_puthexx_fd(unsigned long nb, int fd)
{
    int res = 0;

    if (nb > 15)
    {
        res += ft_puthexx_fd(nb / 16, fd);
        res += ft_puthexx_fd(nb % 16, fd);
    }
    else if (nb < 10)
        res += ft_putchar_fd((char)(nb + '0'), fd);
    else
        res += ft_putchar_fd((char)(nb - 10 + 'a'), fd);

    return res;
}

int ft_putptr_fd(void *ptr, int fd)
{
    int res = 0;

    if (ptr == NULL)
        return write(fd, "(nil)", 5);

    unsigned long nb = (unsigned long)ptr;

    res += ft_putstr_fd("0x", fd);
    res += ft_puthexx_fd(nb, fd);

    return res;
}

#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    int x = 4;

    printf("%d\n", ft_putptr_fd(&x, 1));
    printf("printf: %p\n", (void *)&x);
}
