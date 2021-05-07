/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mocherqu <mocherqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 15:00:07 by mocherqu          #+#    #+#             */
/*   Updated: 2019/10/26 20:33:55 by mocherqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	if (!ft_strlen(s2))
		return ((char *)s1);
	i = 0;
	while (s1[i] && i < len && s1[i] != s2[0])
		i++;
	while (s1[i] && i < len)
	{
		j = 1;
		while (s2[j] && i + j < len && s1[i + j] == s2[j])
			j++;
		if (!s2[j])
			return ((char *)(s1 + i));
		i++;
	}
	return (NULL);
}
