/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 23:58:19 by yajallal          #+#    #+#             */
/*   Updated: 2022/10/25 15:05:34 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	d;

	d = n;
	if (d < 0)
	{
		ft_putchar_fd('-', fd);
		d = -d;
	}
	if (d > 9)
	{
		ft_putnbr_fd(d / 10, fd);
		ft_putchar_fd((d % 10) + '0', fd);
	}
	else
		ft_putchar_fd(d + '0', fd);
}

void	ft_putnbr_base(unsigned long n, char *str)
{
	if (n > 15)
	{
		ft_putnbr_base(n / 16, str);
		ft_putchar_fd(str[n % 16], 1);
	}
	else
		ft_putchar_fd(str[n], 1);
}

int	ft_digits(unsigned long n, unsigned int base)
{
	int	i;

	i = 1;
	while (n / base != 0 && n > base - 1)
	{
		n = n / base;
		i++;
	}
	return (i);
}
