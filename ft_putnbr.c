/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 23:58:19 by yajallal          #+#    #+#             */
/*   Updated: 2022/10/28 08:21:25 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	long int	d;

	d = n;
	if (d < 0)
	{
		ft_putchar('-', count);
		d = -d;
	}
	if (d > 9)
	{
		ft_putnbr(d / 10, count);
		ft_putchar((d % 10) + '0', count);
	}
	else
		ft_putchar(d + '0', count);
}

void	ft_putnbr_base(unsigned long n, char *str, int *count)
{
	if (n > 15)
	{
		ft_putnbr_base(n / 16, str, count);
		ft_putchar(str[n % 16], count);
	}
	else
		ft_putchar(str[n], count);
}

void	ft_putnbr_p(unsigned long n, int *count)
{
	ft_putnbr_base(n, "0123456789abcdef", count);
}

void	ft_putnbr_u(unsigned int n, int *count)
{
	if (n > 9)
	{
		ft_putnbr_u(n / 10, count);
		ft_putchar((n % 10) + '0', count);
	}
	else
		ft_putchar(n + '0', count);
}
