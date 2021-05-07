/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mocherqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 16:22:24 by mocherqu          #+#    #+#             */
/*   Updated: 2019/10/29 18:27:31 by mocherqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*s1;
	char		*s2;

	i = 0;
	s1 = (char *)dst;
	s2 = (char *)src;
	if (!(dst) && !(src))
		return (NULL);
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return ((void *)s1);
}
