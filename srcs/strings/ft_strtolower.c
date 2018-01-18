/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 10:20:50 by cbaillat          #+#    #+#             */
/*   Updated: 2018/01/18 13:49:21 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strings.h"

/*
** Changes all char to lower case if they are uppercase letters.
** Needs a modifiable string as input.
*/

void	ft_strtolower(char *s)
{
	if (s == NULL)
		return ;
	while (*s != '\0')
	{
		if (*s >= 'A' && *s <= 'Z')
			*s = *s + 32;
		++s;
	}
}
