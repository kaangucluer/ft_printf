/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgucluer <kgucluer@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:02:41 by kgucluer          #+#    #+#             */
/*   Updated: 2023/07/09 16:17:42 by kgucluer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int k)
{
	int	i;

	i = 0;
	while (s[i] != (char)k)
	{
		if (!s[i])
			return (0);
		i++;
	}
	return ((char *)(s + i));
}
