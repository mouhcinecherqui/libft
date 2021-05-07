/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mocherqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 16:25:11 by mocherqu          #+#    #+#             */
/*   Updated: 2019/10/22 17:12:19 by mocherqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		j;
	size_t		n;
	size_t		dlen;

	n = size;
	i = 0;
	j = -1;
	while (n-- != 0 && dst[i] != '\0')
		i++;
	dlen = i;
	n = size - dlen;
	if (n == 0)
		return (i + ft_strlen(src));
	while (src[++j] != '\0')
	{
		if (n != 1)
		{
			dst[i++] = src[j];
			n--;
		}
	}
	dst[i] = '\0';
	return (dlen + j);
}
