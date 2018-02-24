/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deque_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 18:36:37 by cbaillat          #+#    #+#             */
/*   Updated: 2018/02/24 19:23:53 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

t_deque	*ft_deque_create(void)
{
	t_deque	*deque;

	if (!(deque = ft_memalloc(sizeof(t_deque))))
		return (NULL);
	return (deque);
}
