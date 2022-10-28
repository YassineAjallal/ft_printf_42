/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:59:59 by yajallal          #+#    #+#             */
/*   Updated: 2022/10/28 09:16:05 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
void	ft_print_conv(char c, int *count, va_list args);

void	ft_putstr(char *s, int *count);
void	ft_putchar(char c, int *count);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);

void	ft_putnbr_base(unsigned long n, char *str, int *count);
void	ft_putnbr(int n, int *count);
void	ft_putnbr_u(unsigned int n, int *count);
void	ft_putnbr_p(unsigned long n, int *count);

#endif