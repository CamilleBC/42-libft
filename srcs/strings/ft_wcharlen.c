/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcharlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 10:21:33 by cbaillat          #+#    #+#             */
/*   Updated: 2018/01/18 13:49:21 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strings.h"

/*
** Using utf-8 encoding (we can find the value on wikipedia) we detect if the
** character is 1,2,3 or 4 bytes long.
*/

size_t	ft_wcharlen(wchar_t wc)
{
	if (wc > 0x10000)
		return (4);
	else if (wc > 0x800)
		return (3);
	else if (wc > 0x80)
		return (2);
	else
		return (1);
}
