/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iostream.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 16:59:44 by cbaillat          #+#    #+#             */
/*   Updated: 2018/01/22 12:22:16 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IOSTREAM_H
# define IOSTREAM_H

/*
** include stdio.h to get FOPEN_MAX macro
*/
# include <stdio.h>
# include <stdarg.h>
# include "libft.h"

# define BUFF_SIZE	256
# define LINE_READ	(int8_t)1
# define FILE_READ	(int8_t)0
# define X64_SIZE				(size_t)64

typedef struct	s_buffer
{
	char		buffer[X64_SIZE] __attribute__((__aligned__(8)));
	size_t		buffer_index;
}				t_buffer;

typedef struct	s_filedes
{
	uint32_t	filedes;
	char		buffer[BUFF_SIZE];
}				t_filedes;

void			ft_print(const char *format, ...);
int				get_next_line(const int fd, char **line);

#endif
