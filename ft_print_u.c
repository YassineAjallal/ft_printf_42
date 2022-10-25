/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 08:24:48 by yajallal          #+#    #+#             */
/*   Updated: 2022/10/25 15:01:31 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(unsigned int n, int *count)
{
	*count += ft_digits(n, 10);
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, 1);
		ft_putchar_fd((n % 10) + '0', 1);
	}
	else
		ft_putchar_fd(n + '0', 1);
}
