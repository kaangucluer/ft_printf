/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgucluer <kgucluer@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:00:17 by kgucluer          #+#    #+#             */
/*   Updated: 2023/07/16 21:40:59 by kgucluer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_typec(char *str)
{
	int	i;

	i = -1;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[++i])
		if (write(1, &str[i], 1) == -1)
			return (-1);
	return (i);
}

int	ft_typeint(long k)
{
	int	len;
	int	tmp;

	len = 0;
	if (k < 0)
	{
		tmp = write(1, "-", 1);
		if (tmp == -1)
			return (-1);
		len++;
		k = -k;
	}
	if (k >= 10)
	{
		tmp = ft_typeint(k / 10);
		if (tmp == -1)
			return (-1);
		len += tmp;
	}
	if (write(1, &"0123456789"[k % 10], 1) == -1)
		return (-1);
	return (len + 1);
}

int	ft_putptr(uintptr_t n, char *base)
{
	size_t	printed;
	size_t	base_length;

	printed = 0;
	base_length = ft_strlen(base);
	if (n >= (uintptr_t)base_length)
	{
		printed += ft_putptr(n / base_length, base);
		printed += ft_putptr(n % base_length, base);
	}
	else
		printed += ft_putchar(base[n % base_length]);
	return (printed);
}

int	ft_type_xandx(unsigned int k, char c)
{
	int	len;

	len = 0;
	if (k >= 16)
		len += ft_type_xandx(k / 16, c);
	if (c == 'x')
		if (write(1, &"0123456789abcdef"[k % 16], 1) == -1)
			return (-1);
	if (c == 'X')
		if (write(1, &"0123456789ABCDEF"[k % 16], 1) == -1)
			return (-1);
	return (len + 1);
}
