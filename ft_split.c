/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tets.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mocherqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 00:28:26 by mocherqu          #+#    #+#             */
/*   Updated: 2019/10/26 16:15:11 by mocherqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		mot(char const *s, char c)
{
	int i;
	int count;

	count = 1;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

static int		chars(char const *tmp, char c)
{
	int k;

	k = 0;
	while (tmp[k] != c && tmp[k] != '\0')
		k++;
	return (k);
}

char			**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!(s) || !(str = (char **)malloc(sizeof(char *) * (mot(s, c) + 1))))
		return (0);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != '\0')
			str[j++] = ft_substr(s, i, chars(&s[i], c));
		while (s[i] != c && s[i])
			i++;
	}
	str[j] = NULL;
	return (str);
}
