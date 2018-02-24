/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deque_push_back.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 18:35:03 by cbaillat          #+#    #+#             */
/*   Updated: 2018/02/24 19:38:32 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

int8_t	ft_deque_push_back(t_deque *deque, void *data)
{
	t_deque_elmt	*new_elmt;

	if (!(new_elmt = (t_deque_elmt*)malloc(sizeof(t_deque_elmt))))
		return (ERROR);
	new_elmt->data = data;
	new_elmt->next = NULL;
	if (deque->size != 0)
	{
		deque->tail->next = new_elmt;
		new_elmt->prev = deque->tail;
	}
	else
	{
		new_elmt->prev = NULL;
		deque->head = new_elmt;
	}
	deque->size += 1;
	deque->tail = new_elmt;
	return (SUCCESS);
}
