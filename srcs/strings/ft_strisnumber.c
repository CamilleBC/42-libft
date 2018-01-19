/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisnumber.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 17:11:25 by cbaillat          #+#    #+#             */
/*   Updated: 2018/01/19 17:11:46 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strings.h"

/*
** Returns (1) if the string represents an integer, (0) otherwise
*/

int		ft_strisnumber(char *s)
{
	if (s == NULL)
		return (0);
	if (*s == '-' || *s == '+')
		++s;
	while (*s != 0)
	{
		if (!ft_isdigit(*s))
			return (0);
		++s;
	}
	return (1);
}
