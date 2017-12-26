/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wputnstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/26 19:31:03 by cbaillat          #+#    #+#             */
/*   Updated: 2017/12/26 19:36:38 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_wputnstr(wchar_t	*s, size_t len)
{
	if (s == NULL)
		return (NULL);
	while (len)
	{
		ft_wputchar(*s);
		--len;
		++s;
	}
}
