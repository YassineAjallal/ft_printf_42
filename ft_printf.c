/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 00:28:37 by yajallal          #+#    #+#             */
/*   Updated: 2022/10/28 09:14:45 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_conv(char c, int *count, va_list args)
{
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int), count);
	if (c == 's')
		ft_putstr(va_arg(args, char *), count);
	if (c == 'c')
		ft_putchar(va_arg(args, int), count);
	if (c == 'u')
		ft_putnbr_u(va_arg(args, unsigned int), count);
	if (c == 'X')
		ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF", count);
	if (c == 'x')
		ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef", count);
	if (c == 'p')
	{
		ft_putstr("0x", count);
		ft_putnbr_p(va_arg(args, unsigned long), count);
	}
	if (c == '%')
		ft_putchar('%', count);
}

int	ft_printf(const char *s, ...)
{
	int		count;
	int		i;
	va_list	parptr;

	i = 0;
	count = 0;
	va_start(parptr, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			if (ft_strchr("cspdiuxX%", s[i]) && s[i])
				ft_print_conv(s[i], &count, parptr);
		}
		else
		{
			write(1, &s[i], 1);
			count++;
		}
		i++;
	}
	va_end(parptr);
	return (count);
}
