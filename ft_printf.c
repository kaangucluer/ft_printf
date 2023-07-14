/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgucluer <kgucluer@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:04:39 by kgucluer          #+#    #+#             */
/*   Updated: 2023/07/13 18:08:06 by kgucluer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

// malloc, free, write, va_start, va_arg, va_copy,
// va_end HARİCİ FONKSİYONLAR
int	ft_putchar(char k)
{
	return (write(1, &k, 1));
}

int	type_convert(va_list va, char type)
{
    if(type == 'c')
        return ft_putchar(va_arg(va,int));
    else if (type == 's')
        return ft_typec(va_arg(va,char *));
    else if (type == 'p')
	
    else if (type == 'd')
    else if (type == 'i')
    else if (type == 'u')
    else if (type == 'x')
    else if (type == 'X')
    else if (type == '%')
        return ft_putchar('%');
    
}

int	ft_printf(const char *str, ...)
{
	va_list args;
	int index;
	int total_byte;
	int tmp;

	va_start(str, args);
	index = 0;
	total_byte = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			tmp = type_convert(args, str[++i]);
			if (tmp == -1)
				return (-1);
			total_byte += tmp - 1;
		}
		else if (write(1, &str[i], 1) == -1)
			return (-1);
		total_byte++;
		i++;
	}
	va_end(args);
	return (total_byte);
}