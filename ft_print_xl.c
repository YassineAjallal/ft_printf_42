/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_Xl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 06:39:33 by yajallal          #+#    #+#             */
/*   Updated: 2022/10/25 15:02:19 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_xl(unsigned int n, int *count)
{
	*count += ft_digits(n, 16);
	ft_putnbr_base(n, "0123456789ABCDEF");
}
