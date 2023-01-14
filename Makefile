# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmangall <lmangall@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 17:19:46 by lmangall          #+#    #+#              #
#    Updated: 2023/01/13 23:19:34 by lmangall         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 			:= cc
CFLAGS 		:= -Wall -Wextra -Werror
NAME 		:= libftprintf.a
NAMELFT 	:= libft.a
sources 	:= ft_printf.c pick_n_print.c
objects 	:= $(sources:.c=.o)
LIBDIR 		:= libft



all:	$(NAME)

$(NAME):	$(objects)
		make -C $(LIBDIR)
		cp -v $(LIBDIR)/$(NAMELFT) $(NAME)
		ar cr $@ $^
		$(CC) $(CFLAGS) -c -o $@ $<
	
clean:
		$(RM) $(objects)
		$(RM) *.o $(LIBDIR)/*.o

fclean:	clean
		$(RM) $(NAME)
		$(RM) $(LIBDIR)/$(NAMELFT)

re:	fclean all
.PHONY: all clean fclean re


# # $@ is the name of the target being generated, 
# # $< the first prerequisite (usually a source file). 
# # get rid of the .o