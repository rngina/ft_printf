/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavabil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:09:28 by rtavabil          #+#    #+#             */
/*   Updated: 2023/11/23 16:06:44 by rtavabil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned(unsigned int n, int *ret)
{
	if (n < 10)
		*ret += ft_putchar(n + '0');
	else
	{
		ft_putnbr(n / 10, ret);
		ft_putnbr(n % 10, ret);
	}
}
