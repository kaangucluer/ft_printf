/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_upperx.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgucluer <kgucluer@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:07:57 by kgucluer          #+#    #+#             */
/*   Updated: 2023/07/17 15:57:28 by kgucluer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type_upperx(unsigned int k, char c, char *base)
{
	int				len;
	unsigned int	baseln;
	int				tmp;

	tmp = 0;
	len = 0;
	baseln = (unsigned int)ft_strlen(base);
	if (k >= baseln)
		tmp += ft_type_upperx(k / 16, c, base);
	if (tmp == -1)
		return (-1);
	len += tmp;
	if (c == 'X')
		if (write(1, &"0123456789ABCDEF"[k % 16], 1) == -1)
			return (-1);
	return (len + 1);
}
