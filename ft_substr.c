/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mocherqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 17:56:46 by mocherqu          #+#    #+#             */
/*   Updated: 2019/10/28 16:08:12 by mocherqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*tmp;
	unsigned int		i;
	unsigned int		j;

	if (!s)
		return (ft_strdup(""));
	i = 0;
	j = 0;
	if ((tmp = (char *)malloc(sizeof(char) * len + 1)))
	{
		while (s[i] != '\0')
		{
			if (i == start)
			{
				while (j < len)
					tmp[j++] = s[i++];
				tmp[j] = '\0';
				return (tmp);
			}
			i++;
		}
	}
	return (ft_strdup(""));
}
