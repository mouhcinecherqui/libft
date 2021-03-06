/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mocherqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:28:47 by mocherqu          #+#    #+#             */
/*   Updated: 2019/10/22 16:50:31 by mocherqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	if ((c <= '9' && c >= '0')
			|| (c <= 'z' && c >= 'a')
			|| (c <= 'Z' && c >= 'A'))
	{
		return (1);
	}
	else
		return (0);
}
