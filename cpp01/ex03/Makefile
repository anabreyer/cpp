# ------------------------------------- VARS ----------------------------------

NAME		=	violence

SRC			=	main.cpp \
				HumanA.cpp \
				HumanB.cpp \
				Weapon.cpp


OBJS		=	$(SRC:.cpp=.o)

COMPILE		=	c++

# -std=c++98 displays an error if an unauthorized function is left in the code
FLAGS		=	-Wall -Wextra -Werror -std=c++98

# ------------------------------------- RULES ---------------------------------
all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILE) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)
	
re:	fclean all

.cpp.o:
	${COMPILE} ${FLAGS} -c $< -o ${<:.cpp=.o}

.PHONY:	all clean fclean re