/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavabil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:39:47 by rtavabil          #+#    #+#             */
/*   Updated: 2023/11/23 16:18:20 by rtavabil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned int n, int *ret, char *base)
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
