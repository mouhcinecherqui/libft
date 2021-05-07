/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mocherqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 17:00:08 by mocherqu          #+#    #+#             */
/*   Updated: 2019/10/27 20:57:54 by mocherqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fornorme(int count, int n)
{
	char	*str;

	if (n == 0)
		return (ft_strdup("0"));
	if ((str = (char *)malloc(sizeof(char) * count + 1)))
	{
		if (n < 0)
		{
			str[0] = '-';
			n = n * -1;
		}
		str[count] = '\0';
		while (count != 0)
		{
			if (str[0] == '-' && count == 1)
				break ;
			str[count - 1] = (n % 10) + '0';
			n = n / 10;
			count--;
		}
		return (str);
	}
	return (0);
}

char		*ft_itoa(int n)
{
	int		l;
	int		count;

	count = 0;
	l = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n <= 2147483647)
	{
		while (l != 0)
		{
			l = l / 10;
			count++;
		}
		if (n < 0)
			count++;
		return (fornorme(count, n));
	}
	if (n == 0)
		fornorme(1, n);
	return (0);
}
