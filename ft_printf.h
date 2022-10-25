/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:59:59 by yajallal          #+#    #+#             */
/*   Updated: 2022/10/25 15:09:28 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);

void	ft_putnbr_u(unsigned int n, int *count);
void	ft_putnbr_xl(unsigned int n, int *count);
void	ft_putnbr_xs(unsigned int n, int *count);
void	ft_putnbr_p(unsigned long n, int *count);
void	ft_print_d(int n, int *count);

int		ft_check_conver(char c);
void	ft_print_conv(char c, int *count, va_list args);

void	ft_putstr(char *s, int *count);
void	ft_putchar(char c, int *count);
void	ft_putchar_fd(char c, int fd);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);

void	ft_putnbr_base(unsigned long n, char *str);
void	ft_putnbr_fd(int n, int fd);
int		ft_digits(unsigned long n, unsigned int base);

#endif