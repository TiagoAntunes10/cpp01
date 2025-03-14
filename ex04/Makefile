RED = \033[0;31m
GRN = \033[0;32m
YEL = \033[0;33m
BLU = \033[0;34m
MAG = \033[0;35m
CYN = \033[0;36m
WHT = \033[0;37m
RES = \033[0m

LIB = ./Include
PRE = ./

SOURCE = main.cpp

SOURCES = ${addprefix $(PRE), $(SOURCE)}

NAME = sed_is_for_losers

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -g -std=c++98

OBJ = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -I $(LIB) -c $< -o $@

help:
	@echo "$(GRN)Test options:$(RES)"
	@echo "test			test_many_args		test_not_enough_args"
	@echo "test_works		test_no_word		test_not_enough_args"
	@echo "test_empty_file		test_empty_str1		test_empty_str2"
	@echo "test_empty_str_file	test_made_up_file"

test: test_many_args test_not_enough_args test_works test_no_word \
	test_empty_file test_empty_str1 test_empty_str2 test_empty_str_file \
	test_made_up_file

test_many_args: all
	@echo "$(GRN)1) Too many arguments:$(RES)"
	-valgrind -q -s ./$(NAME) ./files/file choice problem another_one
	@echo ""

test_not_enough_args: all
	@echo "$(GRN)2) Not enough arguments:$(RES)"
	-valgrind -q -s ./$(NAME) ./files/file choice
	@echo ""
	
test_works: all
	@echo "$(GRN)3) Correct use case:$(RES)"
	@echo "$(RED)Number of occurrences of the word 'choice' before program$(RES)"
	@cat ./files/file | grep -o choice | wc -w
	@echo "$(BLU)Number of occurrences of the word 'problem' before program$(RES)"
	@cat ./files/file | grep -o problem | wc -w
	-valgrind -q -s ./$(NAME) ./files/file choice problem
	@echo "$(RED)Number of occurrences of the word 'choice' after program$(RES)"
	@cat ./files/file.replace | grep -o choice | wc -w
	@echo "$(BLU)Number of occurrences of the word 'problem' after program$(RES)"
	@cat ./files/file.replace | grep -o problem | wc -w
	@echo ""

test_no_word: all
	@echo "$(GRN)4) Word to replace not found:$(RES)"
	@echo "$(RED)Number of occurrences of the word 'choice' before program$(RES)"
	@cat ./files/no_word | grep -o choice | wc -w
	@echo "$(BLU)Number of occurrences of the word 'problem' before program$(RES)"
	@cat ./files/no_word | grep -o problem | wc -w
	-valgrind -q -s ./$(NAME) ./files/no_word choice problem
	@echo "$(RED)Number of occurrences of the word 'choice' after program$(RES)"
	@cat ./files/no_word.replace | grep -o choice | wc -w
	@echo "$(BLU)Number of occurrences of the word 'problem' after program$(RES)"
	@cat ./files/no_word.replace | grep -o problem | wc -w
	@echo ""

test_empty_file: all
	@echo "$(GRN)5) Replacing in an empty file:$(RES)"
	@echo "$(RED)Number of words before program$(RES)"
	@cat ./files/empty | wc -w
	-valgrind -q -s ./$(NAME) ./files/empty choice problem
	@echo "$(RED)Number of words after program$(RES)"
	@cat ./files/empty.replace | wc -w
	@echo ""

test_empty_str1: all
	@echo "$(GRN)6) Trying to replace an empty string:$(RES)"
	-valgrind -q -s ./$(NAME) ./files/no_word "" problem
	@echo ""

test_empty_str2: all
	@echo "$(GRN)7) Trying to replace for an empty string:$(RES)"
	@echo "$(RED)Number of occurrences of the word 'choice' before program$(RES)"
	@cat ./files/file | grep -o choice | wc -w
	-valgrind -q -s ./$(NAME) ./files/file choice ""
	@echo "$(RED)Number of occurrences of the word 'choice' after program$(RES)"
	@cat ./files/file.replace | grep -o choice | wc -w
	@echo ""

test_empty_str_file: all
	@echo "$(GRN)8) Giving an empty string as input for the file:$(RES)"
	-valgrind -q -s ./$(NAME) "" choice problem
	@echo ""

test_made_up_file: all
	@echo "$(GRN)9) File that does not exist:$(RES)"
	-valgrind -q -s ./$(NAME) ./files/made_up choice problem
	@echo ""

clean: 
	rm -f $(OBJ)
        
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
