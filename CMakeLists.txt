# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    CMakeLists.txt                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/16 19:08:49 by cbaillat          #+#    #+#              #
#    Updated: 2017/12/16 20:20:52 by cbaillat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
# build executable.
# all sources are added in their specific folders using target_sources
add_executable (printf)

# include headers in the project
add_library (
	libft
	STATIC
		"${PROJECT_SOURCE_DIR}/srcs"
)

# include libraries
target_link_libraries (printf ${LIBRARIES})
################################################################################
