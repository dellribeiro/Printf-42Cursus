/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrix <whendrix@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 06:59:41 by whendrix          #+#    #+#             */
/*   Updated: 2022/11/15 23:24:46 by whendrix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

char	*ft_utoa(unsigned int n)
{
	int				len;
	char			*str;
	unsigned int	nb;

	nb = n;
	len = ft_nb_base(nb, 10);
	str = malloc ((len) * sizeof(char) + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	len = len - 1;
	if (nb == 0)
		str[0] = '0';
	while (nb > 0)
	{
		str[len] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	return (str);
}

int	ft_putnbr(int nb)
{
	char	*str;
	int		len;

	str = ft_itoa(nb);
	len = ft_putstr(str);
	free(str);
	return (len);
}

int	ft_put_usigned(unsigned int nb)
{
	char	*str;
	int		len;

	str = ft_utoa(nb);
	len = ft_putstr(str);
	free(str);
	return (len);
}

int	ft_puthex(unsigned long nb, char c)
{
	int	i;

	i = ft_nb_base(nb, 16);
	if (nb >= 16)
	{
		ft_puthex(nb / 16, c);
		ft_puthex(nb % 16, c);
	}
	else
	{
		if (nb < 10)
			ft_putchar(nb + 48);
		else if (c == 'x')
			ft_putchar(nb + 87);
		else
			ft_putchar(nb + 55);
	}
	return (i);
}

int	ft_putptr(unsigned long ptr)
{
	int		len;

	if (!ptr)
		return (ft_putstr("(nil)"));
	len = ft_putstr("0x");
	len += ft_puthex(ptr, 'x');
	return (len);
}
