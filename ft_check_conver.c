/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_conver.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:10:35 by yajallal          #+#    #+#             */
/*   Updated: 2022/10/25 15:02:40 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_conver(char c)
{
	if (ft_strchr("cspdiuxX%", c))
		return (1);
	return (0);
}

// Print Conversion
void	ft_print_conv(char c, int *count, va_list args)
{
	if (c == 'd' || c == 'i')
		ft_print_d(va_arg(args, int), count);
	if (c == 's')
		ft_putstr(va_arg(args, char *), count);
	if (c == 'c')
		ft_putchar(va_arg(args, int), count);
	if (c == 'u')
		ft_putnbr_u(va_arg(args, unsigned int), count);
	if (c == 'X')
		ft_putnbr_xl(va_arg(args, unsigned int), count);
	if (c == 'x')
		ft_putnbr_xs(va_arg(args, unsigned int), count);
	if (c == 'p')
	{
		ft_putstr("0x", count);
		ft_putnbr_p(va_arg(args, unsigned long), count);
	}
	if (c == '%')
		ft_putchar('%', count);
}
