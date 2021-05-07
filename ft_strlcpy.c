/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mocherqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 16:25:22 by mocherqu          #+#    #+#             */
/*   Updated: 2019/10/26 20:37:15 by mocherqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char		*ch1;
	char		*ch2;

	if (!src)
		return (0);
	ch1 = dst;
	ch2 = (char *)src;
	if (size == 0)
		return (ft_strlen(src));
	while (*ch2 != '\0')
	{
		if (size != 1)
		{
			*ch1++ = *ch2;
			size--;
		}
		ch2++;
	}
	*ch1 = '\0';
	return ((ch2 - src));
}
