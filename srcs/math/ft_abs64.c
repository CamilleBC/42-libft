/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs64.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/30 23:17:03 by cbaillat          #+#    #+#             */
/*   Updated: 2018/01/18 13:45:27 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math.h"

uint64_t	ft_abs64(int64_t nb)
{
	intmax_t mask;

	mask = (nb >> (sizeof(nb) * CHAR_BIT - 1));
	nb = (uintmax_t)((nb + mask) ^ mask);
	return (nb);
}
