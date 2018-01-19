# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 18:12:06 by cbaillat          #+#    #+#              #
#    Updated: 2018/01/19 22:07:42 by cbaillat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC		= gcc
CFLAGS	= -Wall -Werror -Wextra

# libft sources
# we use the VPATH variable which causes MAKE to look for sources in all those
# directories
VPATH	+= 	./srcs/iostream:./srcs/math:./srcs/memory:./srcs/lists:./srcs/strings
SRCS	=	get_next_line.c
SRCS	+=	ft_lstadd.c \
			ft_lstdel.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstmap.c \
			ft_lstnew.c
SRCS 	+=	ft_abs32.c \
			ft_abs64.c \
			ft_absd.c \
			ft_absf.c \
			ft_absld.c \
			ft_max.c \
			ft_min.c \
			ft_pow.c \
			ft_round.c \
			ft_sqrt.c \
			ft_swap_u.c \
			ft_swap.c
SRCS	+=	ft_bzero.c \
			ft_memalloc.c \
			ft_memccpy.c\
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memdel.c \
			ft_memmove.c \
			ft_memset.c	\
			ft_realloc.c
SRCS	+=	ft_atoi.c \
			ft_atoi64.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_islower.c \
			ft_isprint.c \
			ft_isupper.c \
			ft_itoa.c \
			ft_putchar_fd.c \
			ft_putchar.c \
			ft_putendl_fd.c \
			ft_putendl.c \
			ft_putnbr_fd.c \
			ft_putnbr.c \
			ft_putnbrf.c \
			ft_putnstr.c \
			ft_putstr_fd.c \
			ft_putstr_padzeroes.c \
			ft_putstr.c \
			ft_strcat.c \
			ft_strcdel.c \
			ft_strchr.c \
			ft_strclr.c \
			ft_strcmp.c \
			ft_strcpy.c \
			ft_strcrepl.c \
			ft_strdel.c \
			ft_strdup.c \
			ft_strequ.c \
			ft_strisalnum.c \
			ft_strisnum.c \
			ft_strisnumber.c \
			ft_striter.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlen.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_strncat.c \
			ft_strncmp.c \
			ft_strncpy.c \
			ft_strnequ.c \
			ft_strnew.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strsplit.c \
			ft_strstr.c \
			ft_strsub.c \
			ft_strtolower.c \
			ft_strtoupper.c \
			ft_strtrim.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_wcharlen.c \
			ft_wputchar.c \
			ft_wputnstr.c \
			ft_wputstr.c \
			ft_wstrlen.c

# object files
OBJ_DIR		:=	./obj
OBJECTS		:= $(patsubst %,$(OBJ_DIR)/%,$(SRCS:.c=.o))
# objects dependencies
DEPS		= $(OBJECTS:.o:.d)
DEPS_FLAGS	= -MMD -MP

# includes
INC_DIR	:=	./includes
IFLAGS	+= $(foreach d, $(INC_DIR), -I$d)

# echo output colours
RED		= \033[1;31m
GREEN	= \033[1;32m
YELLOW	= \033[1;33m
BLUE	= \033[1;34m
PURPLE	= \033[1;35m
CYAN	= \033[1;36m
WHITE	= \033[1;37m
NC		= \033[0m

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJECTS)
	@echo "[Building ${PURPLE}library${NC}]"
	@ar rcs $(NAME) $(OBJECTS)


$(OBJ_DIR)/%.o:%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(DEPS_FLAGS) $(IFLAGS)  -o $@ -c $<

clean:
	@echo "[Cleaning ${PURPLE}lib${NC} objects]"
	@/bin/rm -rf $(OBJ_DIR)

fclean: clean
	@echo "[Cleaning ${PURPLE}lib${NC} binary]"
	@/bin/rm -rf $(NAME)

re: fclean all

# include all dependicy files
-include $(DEPS)
