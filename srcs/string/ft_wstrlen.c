/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 10:25:13 by cbaillat          #+#    #+#             */
/*   Updated: 2017/12/18 11:04:56 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** We need to calculate the length to output by checking how many bytes the
** UTF-8 char will take.
** We cannot really use the standard strlen function as we check 4 bytes at a
** time. We would only go 2 times faster. Maybe I'll implement it later.
*/

size_t	ft_wstrlen(uint32_t *wstring)
{
	size_t	len;

	len = 0;
	while (*wstring != 0u)
	{
		len += ft_wcharlen(*wstring);
		++wstring;
	}
	return (len);
}