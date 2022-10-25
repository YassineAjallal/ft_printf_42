/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:51:09 by yajallal          #+#    #+#             */
/*   Updated: 2022/10/25 15:01:16 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_p(unsigned long n, int *count)
{
	*count += ft_digits(n, 16);
	ft_putnbr_base(n, "0123456789abcdef");
}
