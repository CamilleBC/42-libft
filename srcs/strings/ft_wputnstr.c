/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wputnstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/26 19:31:03 by cbaillat          #+#    #+#             */
/*   Updated: 2018/01/18 13:49:21 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strings.h"

void	ft_wputnstr(wchar_t *ws, size_t n)
{
	if (ws == NULL)
		return ;
	while (n)
	{
		ft_wputchar(*ws);
		--n;
		++ws;
	}
}
