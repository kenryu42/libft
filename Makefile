# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jliew <jliew@student.42tokyo.jp>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/04 22:41:31 by jliew             #+#    #+#              #
#    Updated: 2020/08/07 23:46:08 by jliew            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror -I.

SRCS	= \
int/ft_isalnum.c\
int/ft_isalpha.c\
int/ft_isascii.c\
int/ft_isdigit.c\
int/ft_isprint.c\
int/ft_tolower.c\
int/ft_toupper.c\
int/ft_atoi.c\
str/ft_itoa.c\
str/ft_split.c\
str/ft_strchr.c\
str/ft_strdup.c\
str/ft_strlen.c\
str/ft_substr.c\
str/ft_strjoin.c\
str/ft_strlcat.c\
str/ft_strlcpy.c\
str/ft_strncmp.c\
str/ft_strnstr.c\
str/ft_strrchr.c\
str/ft_strtrim.c\
str/ft_strmapi.c\
mem/ft_bzero.c\
mem/ft_calloc.c\
mem/ft_memchr.c\
mem/ft_memcpy.c\
mem/ft_memset.c\
mem/ft_memccpy.c\
mem/ft_memmove.c\
mem/ft_memcmp.c\
sys/ft_putchar_fd.c\
sys/ft_putstr_fd.c\
sys/ft_putendl_fd.c\
sys/ft_putnbr_fd.c\
sys/ft_putchar.c

BONUS	= \
lst/ft_lstnew.c\
lst/ft_lstadd_front.c\
lst/ft_lstsize.c\
lst/ft_lstlast.c\
lst/ft_lstadd_back.c\
lst/ft_lstdelone.c\
lst/ft_lstclear.c\
lst/ft_lstiter.c\
lst/ft_lstmap.c

OBJS	= $(SRCS:.c=.o)

BONUS_OBJS	= $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean:
	rm -f $(OBJS) $(BONUS_OBJS) $(NAME)

re: fclean all

bonus:	$(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: all clean fclean re bonus
