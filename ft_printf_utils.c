/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgucluer <kgucluer@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:00:17 by kgucluer          #+#    #+#             */
/*   Updated: 2023/07/15 15:12:55 by kgucluer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

int	ft_typeint(int k)
{
	int	len;
	int	tmp;

	len = 0;
	if (k == -2147483648)
		return (write(1, "-2147483648", 11));
	if (k < 0)
	{
		tmp = write(1, "-", 1);
		if (tmp == -1)
			return (-1);
		len++;
		k = -1;
	}
	if (k >= 10)
		len += ft_typeint(k / 10);
	else if (write(1, &"0123456789"[k % 10], 1) == -1)
		return (-1);
	return (len + 1);
}

int	ft_type_dectohex(unsigned long long k, int count)
{
	int	len;
	int	tmp;

	len = 0;
	if (count == 1)
	{
		tmp = write(1, "0x", 2);
		if (tmp == -1)
			return (-1);
		len++;
		count = 0;
	}
	if (k >= 16)
		len += ft_type_dectohex(k / 16, count);
	if (write(1, &"0123456789abcdef"[k % 16], 1) == -1)
		return (-1);
	return (len + 1);
}

int	ft_type_xandx(unsigned long k, char c)
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

int	ft_typedec(unsigned int k)
{
	int	len;

	len = 0;
	if (k >= 10)
		len += ft_typedec(k / 10);
	if (write(1, &"0123456789"[k % 10], 1) == -1)
		return (-1);
	return (len + 1);
}
