/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 10:15:06 by cbaillat          #+#    #+#             */
/*   Updated: 2018/01/18 13:49:21 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strings.h"

/*
** Changes all char to uppercase if they are lowercase letters.
** Needs a modifiable string as input.
*/

void	ft_strtoupper(char *s)
{
	if (s == NULL)
		return ;
	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
			*s = *s - 32;
		++s;
	}
}
