/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 00:28:37 by yajallal          #+#    #+#             */
/*   Updated: 2022/10/25 15:04:57 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
			if (ft_check_conver(s[i]) && s[i])
				ft_print_conv(s[i], &count, parptr);
		}
		else if (s[i])
		{
			write(1, &s[i], 1);
			count++;
		}
		i++;
	}
	va_end(parptr);
	return (count);
}
