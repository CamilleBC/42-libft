/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deque_pop_elmt.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 15:40:16 by cbaillat          #+#    #+#             */
/*   Updated: 2018/03/22 10:36:42 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

void	*ft_deque_pop_elmt(t_deque *deque, t_deque_elmt *elmt)
{
	void			*data;
	t_deque_elmt	*prev;

	if (deque->size == 0)
		return (NULL);
	if (!elmt)
		return (NULL);
	if (deque->head == elmt)
		return (ft_deque_pop_front(deque));
	if (deque->tail == elmt)
		return (ft_deque_pop_back(deque));
	prev = deque->head;
	while (prev->next && prev->next != elmt)
		prev = prev->next;
	if (!prev->next)
		return (NULL);
	data = elmt->data;
	prev->next = elmt->next;
	prev->next->prev = prev;
	free(data);
	free(elmt);
	deque->size -= 1;
	return (data);
}
