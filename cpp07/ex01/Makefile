# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/23 20:49:02 by abalhamm          #+#    #+#              #
#    Updated: 2024/02/23 20:49:02 by abalhamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	main.cpp

OBJ =	$(SRC:.cpp=.o)

CXX =	c++

RM =	rm -f

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

NAME =	ex01

%.o : %.cpp
			$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $@

clean:
	@$(RM) $(OBJ)

fclean: clean
		@$(RM) $(NAME) 

re: fclean all

.PHONY: all clean fclean re