/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mocherqu <mocherqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 14:47:50 by mocherqu          #+#    #+#             */
/*   Updated: 2019/10/22 17:09:35 by mocherqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (str[j] != '\0')
		j++;
	while (j >= 0)
	{
		if (str[j] == c)
			return ((char *)str + j);
		j--;
	}
	return (0);
}
