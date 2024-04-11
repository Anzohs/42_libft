# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hladeiro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/11 21:33:01 by hladeiro          #+#    #+#              #
#    Updated: 2024/04/11 22:55:27 by hladeiro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS			=	ft_memset.c ft_isalnum.c ft_isprint.c ft_memcmp.c\
ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
ft_strchr.c  ft_strlcpy.c ft_putnbr_fd.c\
					ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c\
					ft_memmove.c ft_strdup.c  ft_strlen.c  ft_strrchr.c \
					ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memset.c  \
					ft_split.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
					ft_isupper.c ft_striteri.c\
					ft_strjoin.c ft_strtrim.c ft_islower.c ft_strmapi.c
OBJS			= $(SRCS:.c=.o)

BONUS			=	ft_lstsize.c

BONUS_OBJ		= $(BONUS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:			all clean fclean re bonus
