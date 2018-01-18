/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcrepl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 10:36:28 by cbaillat          #+#    #+#             */
/*   Updated: 2018/01/18 13:49:21 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strings.h"

/*
** Changes all occurences of the char c by a substitute
*/

void	ft_strcrepl(char *s, char c, char substitute)
{
	if (s == NULL)
		return ;
	while (*s != '\0')
	{
		if (*s == c)
			*s = substitute;
		++s;
	}
}
