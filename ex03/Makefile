# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/27 18:19:17 by alejhern          #+#    #+#              #
#    Updated: 2025/11/27 18:19:22 by alejhern         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = unnecessary_violence
CC = c++
CFLAGS = -Wall -Wextra -Werror -I. -std=c++98
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp unnecessary_violence.hpp Makefile Human.hpp Weapon.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re