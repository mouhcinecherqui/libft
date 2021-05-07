/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mocherqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 20:30:02 by mocherqu          #+#    #+#             */
/*   Updated: 2019/10/28 16:06:18 by mocherqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	if ((tmp = (char *)malloc(sizeof(char)
					* (ft_strlen(s1) + ft_strlen(s2) + 1))))
	{
		while (s1[i] != '\0')
		{
			tmp[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0')
			tmp[i++] = s2[j++];
		tmp[i] = '\0';
		return (tmp);
	}
	return (0);
}
