/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 17:28:55 by cbaillat          #+#    #+#             */
/*   Updated: 2018/01/18 17:38:56 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strings.h"

/*
** Returns (1) if the string is numerical, (0) otherwise
*/

int		ft_strisnum(char *s)
{
	if (s == NULL)
		return (0);
	while (*s != 0)
	{
		if (!ft_isdigit(*s))
			return (0);
		++s;
	}
	return (1);
}
