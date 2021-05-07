/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mocherqu <mocherqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 15:07:15 by mocherqu          #+#    #+#             */
/*   Updated: 2019/10/26 20:38:02 by mocherqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	sin;
	int	res;
	int	j;

	sin = 1;
	res = 0;
	j = 0;
	while (str[j] == ' ' || str[j] == '\t' || str[j] == '\f'
			|| str[j] == '\n' || str[j] == '\r' || str[j] == '\v')
		j++;
	if (str[j] == '-')
	{
		sin = -1;
		j++;
	}
	else if (str[j] == '+')
		j++;
	while (str[j] >= '0' && str[j] <= '9')
	{
		res = res * 10;
		res = res + (str[j] - '0');
		j++;
	}
	return (res * sin);
}
