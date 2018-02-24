/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deque_pop_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 18:35:16 by cbaillat          #+#    #+#             */
/*   Updated: 2018/02/24 19:16:45 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

void	*ft_deque_pop_back(t_deque *deque)
{
	void			*data;
	t_deque_elmt	*tmp;

	if (deque->size == 0)
		return (NULL);
	deque->size -= 1;
	tmp = deque->tail;
	data = deque->tail->data;
	if (deque->size > 0)
	{
		deque->tail = deque->tail->prev;
		deque->tail->next = NULL;
		if (deque->size == 1)
			deque->head->next = NULL;
	}
	else
	{
		deque->head = NULL;
		deque->tail = NULL;
	}
	free(tmp);
	return (data);
}
