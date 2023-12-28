/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavabil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:45:45 by rtavabil          #+#    #+#             */
/*   Updated: 2023/11/23 14:51:22 by rtavabil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr_base_ptr(unsigned long int n, int *ret, char *base)
{
	int	i;
	int	new_num[100];

	if (n == 0)
	{
		*ret += ft_putchar('0');
		return ;
	}
	i = 0;
	while (n > 0)
	{
		new_num[i] = n % 16;
		n = n / 16;
		i++;
	}
	while (--i >= 0)
		*ret += ft_putchar(base[new_num[i]]);
}

void	ft_putptr(void *ptr, int *ret)
{
	if (!ptr)
	{
		ft_putstr("(nil)", ret);
		return ;
	}
	ft_putstr("0x", ret);
	ft_putnbr_base_ptr((unsigned long int)ptr, ret, "0123456789abcdef");
}
