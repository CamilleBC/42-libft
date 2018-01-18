/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iostream.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 16:59:44 by cbaillat          #+#    #+#             */
/*   Updated: 2018/01/18 17:05:48 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IOSTREAM_H
# define IOSTREAM_H

/*
** include stdio.h to get FOPEN_MAX macro
*/
# include <stdio.h>
# include "libft.h"

# define BUFF_SIZE	256
# define LINE_READ	(int8_t)1
# define FILE_READ	(int8_t)0
# define ERROR		(int8_t)-1
# define SUCCESS	(int8_t)0

typedef struct	s_filedes
{
	uint32_t	filedes;
	char		buffer[BUFF_SIZE];
}				t_filedes;

int				get_next_line(const int fd, char **line);

#endif
