# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: turescu <turescu@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/10 15:29:22 by turescu           #+#    #+#              #
#    Updated: 2025/04/10 15:37:00 by turescu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp .cpp
CXX = @c++
RM = @rm -f
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
OBJS = $(SRC:.cpp=.o)
NAME = mutant
%.o: %.cpp	
	$(CXX) $(CXXFLAGS) -c $< -o $@
all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all
.PHONY: all clean fclean re