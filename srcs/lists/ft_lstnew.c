/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 18:08:49 by cbaillat          #+#    #+#             */
/*   Updated: 2018/01/18 13:42:11 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lists.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new_elt;

	if ((new_elt = (t_list *)malloc(sizeof(*new_elt))) == NULL)
		return (NULL);
	if (content == NULL)
	{
		new_elt->content = NULL;
		new_elt->content_size = 0;
	}
	else
	{
		if ((new_elt->content = malloc(content_size)) == NULL)
			return (NULL);
		ft_memcpy(new_elt->content, content, content_size);
		new_elt->content_size = content_size;
	}
	new_elt->next = NULL;
	return (new_elt);
}
