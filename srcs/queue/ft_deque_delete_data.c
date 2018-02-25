/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deque_delete_data.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 10:11:08 by cbaillat          #+#    #+#             */
/*   Updated: 2018/02/25 10:15:38 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

void	ft_deque_delete_data(t_deque *deque)
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
}
