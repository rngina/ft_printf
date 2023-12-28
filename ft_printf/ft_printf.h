/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavabil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:41:01 by rtavabil          #+#    #+#             */
/*   Updated: 2023/11/23 16:06:15 by rtavabil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
void	ft_putstr(char *s, int *ret);
void	ft_putptr(void *ptr, int *ret);
void	ft_putnbr(int n, int *ret);
void	ft_putunsigned(unsigned int n, int *ret);
void	ft_putnbr_base(unsigned int n, int *ret, char *base);

#endif
