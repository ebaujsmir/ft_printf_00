# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esmirnov <esmirnov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 10:30:04 by esmirnov          #+#    #+#              #
#    Updated: 2022/01/13 16:28:11 by esmirnov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# executable file name
NAME = libftprintf.a

# sources files
SRCS	= ft_printf.c\
		ft_format.c\
		ft_print_char.c\
		ft_print_nbr_hex.c\
		ft_print_nbr_unsigned.c \
		ft_print_nbr.c\
		ft_print_ptr.c\
		ft_print_string.c\
		ft_putchar.c\
		ft_putnbr_base.c\
		ft_putnbr_u_base.c\
		ft_putstr.c\
		ft_strlen.c\
		ft_nbr_size.c\
		ft_nbr_u_size.c\
		ft_check_base.c
	
# list ".o" files
OBJS	= $(SRCS:.c=.o)

# flags
CFLAGS	= -Wall -Werror -Wextra# -g -fsanitize=address

# compiler
CC	= gcc

# deleting files
# rm - remove files or directories
# -r, -R --recursive remove directories and thier contents reursively
# -f ignore nonexistent files, never prompt
RM	= rm -rf

# ar s == ranlib 
# c == create - means create the library if it did not exist.
# r == replace - means that if the library already exists, replace the old files
#		within the library with the new files.
# s == sort - can be seen to mean 'sort' (create a sorted index of) the library,
#	so that it will be indexed and faster to access the functions in the library.
LINKER	= ar rcs

#Rules
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:	$(NAME)

$(NAME):$(OBJS)
	$(LINKER) $(NAME) $(OBJS)

#delete .o files	
clean:
#	$(RM) objs/
	$(RM) $(OBJS)
	
# f(force) clean to delete the binary
fclean: 	clean
	$(RM) $(NAME)

# delete all and recompile all
re:	fclean all

.PHONY:	all clean fclean re