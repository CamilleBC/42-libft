/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deque_pop_elmt.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 15:40:16 by cbaillat          #+#    #+#             */
/*   Updated: 2018/03/21 18:17:52 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

void	*ft_deque_pop_elmt(t_deque *deque, t_deque_elmt *elmt)
{
	void			*data;
	t_deque_elmt	*prev;

	if (deque->size == 0)
		return (NULL);
	deque->size -= 1;

	if (!elmt)
		return (0);
	prev = deque->head;
	if (prev == elmt)
		return (ft_deque_pop_front(deque));
	while (prev->next != elmt)
		prev = prev->next;
	data = elmt->data;
	prev->next = elmt->next;
	if (!prev->next)
		deque->tail = prev;
	free(elmt);
	return (data);
}
