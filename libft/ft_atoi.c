/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgucluer <kgucluer@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:21:25 by kgucluer          #+#    #+#             */
/*   Updated: 2023/07/09 16:14:25 by kgucluer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	k;
	int	a;
	int	n;

	k = 0;
	a = 0;
	n = 1;
	while ((str[k] == 32) || (str[k] >= 9 && str[k] <= 13))
		k++;
	if (str[k] == '-' || str[k] == '+')
	{
		if (str[k] == '-')
			n *= -1;
		k++;
	}
	while (str[k] >= '0' && str[k] <= '9')
	{
		a = (str[k] - '0') + (a * 10);
		k++;
	}
	return (n * a);
}
