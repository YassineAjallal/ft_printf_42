/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_xs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 08:50:01 by yajallal          #+#    #+#             */
/*   Updated: 2022/10/25 15:03:08 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_xs(unsigned int n, int *count)
{
	*count += ft_digits(n, 16);
	ft_putnbr_base(n, "0123456789abcdef");
}
