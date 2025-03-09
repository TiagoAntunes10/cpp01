LIB = ./Include
PRE = ./

SOURCE = main.cpp

SOURCES = ${addprefix $(PRE), $(SOURCE)}

NAME = sed_is_for_losers

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -I $(LIB) -c $< -o $@

test: all
	cat file | grep -o choice | wc -w
	cat file | grep -o problem | wc -w
	./$(NAME) file choice problem
	cat file.replace | grep -o choice | wc -w
	cat file.replace | grep -o problem | wc -w


clean: 
	rm -f $(OBJ)
        
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
