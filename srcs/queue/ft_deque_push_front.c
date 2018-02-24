/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deque_push_front.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 18:34:54 by cbaillat          #+#    #+#             */
/*   Updated: 2018/02/24 19:35:56 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

int8_t	ft_deque_push_front(t_deque *deque, void *data)
{
	t_deque_elmt	*new_elmt;

	if (!(new_elmt = (t_deque_elmt*)malloc(sizeof(t_deque_elmt))))
		return (ERROR);
	new_elmt->data = data;
	new_elmt->prev = NULL;
	if (deque->size != 0)
	{
		deque->head->prev = new_elmt;
		new_elmt->next = deque->head;
		deque->head = new_elmt;
	}
	else
	{
		new_elmt->next = NULL;
		deque->tail = new_elmt;
		deque->head = new_elmt;
	}
	deque->size += 1;
	return (SUCCESS);
}
