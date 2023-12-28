/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavabil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:19:06 by rtavabil          #+#    #+#             */
/*   Updated: 2023/11/23 16:05:18 by rtavabil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	check(char str, va_list args, int *ret)
{
	if (str == 'c')
		*ret += ft_putchar(va_arg(args, int));
	if (str == 's')
		ft_putstr(va_arg(args, char *), ret);
	if (str == 'p')
		ft_putptr(va_arg(args, void *), ret);
	if (str == 'd' || str == 'i')
		ft_putnbr(va_arg(args, int), ret);
	if (str == 'u')
		ft_putunsigned(va_arg(args, unsigned int), ret);
	if (str == 'x')
		ft_putnbr_base(va_arg(args, unsigned int), ret, "0123456789abcdef");
	if (str == 'X')
		ft_putnbr_base(va_arg(args, unsigned int), ret, "0123456789ABCDEF");
	if (str == '%')
		*ret += ft_putchar('%');
}

int	ft_printf(const char	*str, ...)
{
	int		len;
	int		i;
	va_list	args;

	len = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			check(str[i], args, &len);
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
