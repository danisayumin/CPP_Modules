<<<<<<< HEAD
NAME = ex03
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
INC = -I ./
LEAK = valgrind --leak-check=full --show-leak-kinds=all

SRCS_DIR = ./
OBJS_DIR = objs/

FILE = main \
			 HumanA \
			 HumanB \
			 Weapon

OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILE)))
=======
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = unnecessary_violence
>>>>>>> e3b656bfac05375c8cdd958083c2951037a33326

all: $(NAME)

$(NAME): $(OBJS)
<<<<<<< HEAD
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)%.o: $(SRCS_DIR)%.cpp | $(OBJS_DIR)
	$(CC) $(FLAGS) $(INC) -c $< -o $@

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)
	mkdir -p $(OBJS_DIR)$(EX_DIR)

val:
	@make
	@$(LEAK) ./$(NAME)	

clean:
	$(RM) $(OBJS_DIR)

fclean: clean
	$(RM) $(NAME)
=======
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
>>>>>>> e3b656bfac05375c8cdd958083c2951037a33326

re: fclean all

.PHONY: all clean fclean re