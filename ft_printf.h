/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrix <whendrix@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 21:29:16 by whendrix          #+#    #+#             */
/*   Updated: 2022/09/01 21:29:17 by whendrix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_convert(va_list args, const char *str, int i);
int		ft_putchar(char c);
int		ft_putstr(char *s);
char	*ft_itoa(int n);
char	*ft_utoa(unsigned int n);
int		ft_putnbr(int nb);
int		ft_put_usigned(unsigned int nb);
int		ft_puthex(unsigned long nb, char c);
int		ft_putptr(unsigned long ptr);
int		ft_nb_base(size_t nb, int base);
int		ft_nblen(long int n);
int		ft_converter_bonus(va_list args, const char *str, int i);
int		ft_putsharp(va_list args, const char *str, int i);
int		ft_putspaceplus(va_list args, const char *str, int i);
int		bonus_check(char c);
#endif