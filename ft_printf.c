/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgucluer <kgucluer@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:04:39 by kgucluer          #+#    #+#             */
/*   Updated: 2023/07/15 14:23:49 by kgucluer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putchar(char k)
{
	return (write(1, &k, 1));
}

int	type_convert(va_list va, char type)
{
	if (type == 'c')
		return (ft_putchar(va_arg(va, int)));
	else if (type == 's')
		return (ft_typec(va_arg(va, char *)));
	else if (type == 'p')
		return (ft_type_dectohex(va_arg(va, unsigned long), 1));
	else if (type == 'd' || type == 'i')
		return (ft_typeint(va_arg(va, int)));
	else if (type == 'u')
		return (ft_typedec(va_arg(va, unsigned int)));
	else if (type == 'x' || type == 'X')
		return (ft_type_xandX(va_arg(va, unsigned long), type));
	else if (type == '%')
		return (ft_putchar('%'));
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		total_byte;
	int		tmp;

	va_start(args, str);
	i = -1;
	total_byte = 0;
	while (str[++i])
	{
		if (str[i] == '%')
		{
			tmp = type_convert(args, str[++i]);
			if (tmp == -1)
				return (-1);
			total_byte += tmp - 1;
			i++;
		}
		else if (write(1, &str[i], 1) == -1)
			return (-1);
		total_byte++;
	}
	va_end(args);
	return (total_byte);
}
