# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmehmy < jmehmy@student.42lisboa.com >     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 20:46:13 by jmehmy            #+#    #+#              #
#    Updated: 2024/11/12 18:55:19 by jmehmy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


files 	   = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
			ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
			ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
			ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
			ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c \
			ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c \
			ft_substr.c ft_tolower.c ft_toupper.c ft_strlcpy.c \

b_list	= ft_lstnew.c ft_lstadd_front.c \
				ft_lstsize.c ft_lstlast.c \
				ft_lstadd_back.c ft_lstdelone.c \
				ft_lstclear.c ft_lstiter.c \
				ft_lstmap.c \
				
NAME 		= libft.a

Compiler	= cc

CmpFlags	= -Wall -Wextra -Werror

CFILES	= $(files)
BFILES  = $(b_list)
RM		= rm -f
LIBC	= ar -rc
OFILES	= $(CFILES:.c=.o)
BONUS_FILES = $(BFILES:.c=.o)

$(NAME): $(OFILES)
	
	$(LIBC) $(NAME) $(OFILES)

bonus: $(BONUS_FILES)
	$(LIBC) $(NAME) $(BONUS_FILES)

$(OFILES): $(CFILES)
			$(Compiler) $(CmpFlags) -c $(CFILES) -I./

$(BONUS_FILES): $(BFILES)
			$(Compiler) $(CmpFlags) -c $(BFILES) -I./

all: $(NAME)

clean:
	$(RM) $(OFILES) $(BONUS_FILES)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
