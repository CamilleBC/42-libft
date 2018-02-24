/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deque_delete.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 18:36:26 by cbaillat          #+#    #+#             */
/*   Updated: 2018/02/24 19:25:31 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

void	ft_deque_delete(t_deque *deque)
{
	t_deque_elmt	*tmp;

	while (deque->head)
	{
		tmp = deque->head->next;
		if (deque->head->data)
		{
			free(deque->head->data);
			deque->head->data = NULL;
		}
		free(deque->head);
		deque->head = tmp;
	}
	free(deque);
	deque = NULL;
}
