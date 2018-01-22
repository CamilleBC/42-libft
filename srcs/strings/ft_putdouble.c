/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdouble.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/31 14:32:56 by cbaillat          #+#    #+#             */
/*   Updated: 2018/01/22 13:07:26 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strings.h"

void	ft_putdouble(long double n, size_t size)
{
	long double decimal;

	ft_putnbr((int64_t)n);
	if (size > 0)
	{
		ft_putchar('.');
		decimal = n - (int64_t)n;
		while (size-- > 0)
			decimal *= 10;
		ft_putnbr(ft_round(decimal));
	}
}
