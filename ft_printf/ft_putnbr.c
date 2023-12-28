/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavabil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:54:45 by rtavabil          #+#    #+#             */
/*   Updated: 2023/11/23 14:57:09 by rtavabil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *ret)
{
	if (n == -2147483648)
	{
		*ret += ft_putchar('-');
		*ret += ft_putchar('2');
		ft_putnbr(147483648, ret);
	}
	else if (n == 0)
		*ret += ft_putchar('0');
	else if (n < 0)
	{
		*ret += ft_putchar('-');
		n = n * -1;
		ft_putnbr(n, ret);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10, ret);
		ft_putnbr(n % 10, ret);
	}
	else
		*ret += ft_putchar(n + 48);
}
