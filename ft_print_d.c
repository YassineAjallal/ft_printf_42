/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 09:08:03 by yajallal          #+#    #+#             */
/*   Updated: 2022/10/25 15:00:52 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_nb_digits(int n)
{
	int	i;

	i = 1;
	if (n < 0)
		i++;
	while (n / 10 != 0 && (n > 9 || n < -9))
	{
		n = n / 10;
		i++;
	}
	return (i);
}

void	ft_print_d(int n, int *count)
{
	*count += ft_nb_digits(n);
	ft_putnbr_fd(n, 1);
}
