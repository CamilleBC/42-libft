/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 11:16:23 by cbaillat          #+#    #+#             */
/*   Updated: 2018/01/19 11:28:42 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math.h"

/*
** We XOR a and b 3 times to swap the values.
*/

void	ft_swap_u(uint64_t a, uint64_t b)
{
	uint64_t	tmp;

	tmp = a;
	a = b;
	b = tmp;
}
