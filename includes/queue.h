/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 18:12:49 by cbaillat          #+#    #+#             */
/*   Updated: 2018/02/24 19:24:37 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QUEUE_H
# define QUEUE_H

# include "libft.h"

typedef struct	s_deque_elmt
{
	void				*data;
	struct s_deque_elmt	*next;
	struct s_deque_elmt	*prev;
}				t_deque_elmt;

typedef struct	s_deque {
	t_deque_elmt	*head;
	t_deque_elmt	*tail;
	uint64_t		size;
}				t_deque;

t_deque			*ft_deque_create(void);
void			ft_deque_delete(t_deque *deque);
void			*ft_deque_pop_back(t_deque *deque);
void			*ft_deque_pop_front(t_deque *deque);
int8_t			ft_deque_push_back(t_deque *deque, void *data);
int8_t			ft_deque_push_front(t_deque *deque, void *data);

#endif
