/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisalnum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 10:42:35 by cbaillat          #+#    #+#             */
/*   Updated: 2018/01/18 13:49:21 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strings.h"

/*
** Returns (1) if the string is alpha-numerical, (0) otherwise
*/

int		ft_strisalnum(char *s)
{
	if (s == NULL)
		return (0);
	while (*s != 0)
	{
		if (!ft_isalnum(*s))
			return (0);
		++s;
	}
	return (1);
}
