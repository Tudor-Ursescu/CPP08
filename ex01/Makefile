# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: turescu <turescu@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/09 19:39:34 by turescu           #+#    #+#              #
#    Updated: 2025/04/10 14:12:35 by turescu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Span.cpp
CXX = @c++
RM = @rm -f
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
OBJS = $(SRC:.cpp=.o)
NAME = span
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