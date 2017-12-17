# This file add the sources in the directory to the executable specified with
# the add_executable command
target_sources(
	libft
		PRIVATE
			ft_bzero.c
			ft_memalloc.c
			ft_memccpy.c
			ft_memchr.c
			ft_memcmp.c
			ft_memcpy.c
			ft_memdel.c
			ft_memmove.c
			ft_memset.c
			ft_realloc.c
)
