# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frgarci2 <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/26 15:53:48 by frgarci2          #+#    #+#              #
#    Updated: 2023/10/24 16:08:37 by frgarci2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_FILES = ft_atoi.c \
			ft_isprint.c \
			ft_strrchr.c \
			ft_strlcat.c \
			ft_bzero.c \
			ft_memchr.c \
			ft_strlcpy.c \
			ft_memcmp.c \
			ft_tolower.c \
			ft_isalnum.c \
			ft_strlen.c \
			ft_toupper.c \
			ft_isalpha.c \
			ft_memcpy.c \
			ft_strchr.c \
			ft_isascii.c \
			ft_memmove.c \
			ft_strncmp.c \
			ft_isdigit.c \
			ft_memset.c \
			ft_strnstr.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
		 	ft_putstr_fd.c \
		   	ft_putendl_fd.c \
		   	ft_putnbr_fd.c 
					
BONUS_FILES = ft_lstnew_bonus.c \
			  ft_lstadd_front_bonus.c \
			  ft_lstsize_bonus.c \
			  ft_lstlast_bonus.c \
			  ft_lstadd_back_bonus.c  

OBJS = $(SRC_FILES:.c=.o)
BONUS_OBJS = $(BONUS_FILES:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = -r
RM = rm -f
all: $(NAME)
$(NAME): $(OBJS)
		$(AR) $(ARFLAGS) $(NAME) $(OBJS)
bonus: $(BONUS_OBJS)
		$(AR) $(ARFLAGS) $(NAME) $(BONUS_OBJS)
clean:
	$(RM) $(OBJS) $(BONUS_OBJS)
fclean:	clean
		$(RM) $(NAME)
re:		fclean all
.PHONY: all bonus clean fclean re
