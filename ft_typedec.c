/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_typedec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgucluer <kgucluer@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:18:12 by kgucluer          #+#    #+#             */
/*   Updated: 2023/07/17 15:57:22 by kgucluer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_typedec(unsigned int k, char *base)
{
	int				len;
	unsigned int	baseln;
	int				tmp;

	baseln = 0;
	len = 0;
	tmp = 0;
	baseln = (unsigned int)ft_strlen(base);
	if (k >= baseln)
		tmp += ft_typedec(k / 10, base);
	if (tmp == -1)
		return (-1);
	len += tmp;
	if (write(1, &"0123456789"[k % 10], 1) == -1)
		return (-1);
	return (len + 1);
}
