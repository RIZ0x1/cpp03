CC		=	c++
FLGS	=	-Wall -Wextra -Werror -std=c++98 -pedantic

NAME	=	out
HDRS	=	ClapTrap.hpp ScavTrap.hpp
SRCS	=	ClapTrap.cpp ScavTrap.cpp main.cpp
OBJS	=	$(SRCS:%.cpp=%.o)

.PHONY: all clean fclean re good

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

good: all clean

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o out

$(OBJS): $(SRCS)
	$(CC) $(FLGS) -c $(SRCS)