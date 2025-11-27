# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/27 21:11:37 by alejhern          #+#    #+#              #
#    Updated: 2025/11/27 21:11:40 by alejhern         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = karen_filter
CC = c++
CFLAGS = -Wall -Wextra -Werror -I. -std=c++98
SRCS = Karen.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re