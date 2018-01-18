/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 18:21:10 by cbaillat          #+#    #+#             */
/*   Updated: 2018/01/18 13:42:11 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lists.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (alst == NULL)
		return ;
	if ((*alst)->content != NULL)
		del((*alst)->content, (*alst)->content_size);
	if (*alst != NULL)
		free(*alst);
	*alst = NULL;
}
