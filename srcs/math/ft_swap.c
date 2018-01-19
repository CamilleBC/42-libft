/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 11:07:52 by cbaillat          #+#    #+#             */
/*   Updated: 2018/01/19 11:28:54 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math.h"

/*
** We XOR a and b 3 times to swap the values.
*/

void	ft_swap(int64_t a, int64_t b)
{
	uint64_t	tmp;

	tmp = a;
	a = b;
	b = tmp;
}
