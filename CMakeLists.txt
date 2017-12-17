# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    CMakeLists.txt                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/16 19:08:49 by cbaillat          #+#    #+#              #
#    Updated: 2017/12/17 10:49:44 by cbaillat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cmake_minimum_required (VERSION 3.9)

################################################################################
# build library.
# all sources are added in their specific folders using target_sources
add_library (libft STATIC)

# include headers in the project
target_include_directories (
	libft
		PUBLIC
			"${CURRENT_SOURCE_DIR}/srcs"
)

# add all the sources subdirectories
add_subdirectory (srcs/lists)
add_subdirectory (srcs/math)
add_subdirectory (srcs/memory)
add_subdirectory (srcs/string)
################################################################################
