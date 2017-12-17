# This file add the sources in the directory to the executable specified with
# the add_executable command
target_sources(
	libft
		PRIVATE
			ft_lstadd.c
			ft_lstdel.c
			ft_lstdelone.c
			ft_lstiter.c
			ft_lstmap.c
			ft_lstnew.c
)
