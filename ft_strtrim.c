/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mocherqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 00:07:37 by mocherqu          #+#    #+#             */
/*   Updated: 2019/10/30 10:00:31 by mocherqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		c;

	if (!(s1) || !(set))
		return (NULL);
	c = ft_strlen(s1) - 1;
	i = 0;
	j = 0;
	while (s1[i] && set[j] && i <= c)
	{
		if (s1[c] == set[j])
		{
			c--;
			j = 0;
		}
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else if (s1[i] != set[j] && s1[c] != set[j])
			j++;
	}
	return (ft_substr((char *)s1, i, (c - i + 1)));
}
