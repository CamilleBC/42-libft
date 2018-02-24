/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deque_pop_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 18:34:47 by cbaillat          #+#    #+#             */
/*   Updated: 2018/02/24 19:13:19 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

void	*ft_deque_pop_front(t_deque *deque)
{
	void			*data;
	t_deque_elmt	*tmp;

	if (deque->size == 0)
		return (NULL);
	deque->size -= 1;
	tmp = deque->head;
	data = deque->head->data;
	if (deque->size > 0)
	{
		deque->head = deque->head->next;
		deque->head->prev = NULL;
		if (deque->size == 1)
			deque->tail->prev = NULL;
	}
	else
	{
		deque->head = NULL;
		deque->tail = NULL;
	}
	free(tmp);
	return (data);
}
