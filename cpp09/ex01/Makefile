# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/12 17:33:13 by abalhamm          #+#    #+#              #
#    Updated: 2024/03/12 17:33:19 by abalhamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	main.cpp RPN.cpp

OBJ =	$(SRC:.cpp=.o)

CXX =	c++

RM =	rm -f

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

NAME =	RPN

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