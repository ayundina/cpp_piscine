NAME = evaluate
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -g

FILES =	main \
				expression_class \
				a_token_class \
				token_addition \
				token_number \
				token_substruction \
				token_multiplication \
				token_division \
				token_open_bracket \
				token_close_bracket

HEADERS =	expression_class \
					a_token_class \
					token_addition \
					token_number \
					token_substruction \
					token_multiplication \
					token_division \
					token_open_bracket \
					token_close_bracket

SRCFOLDER = src
SRC = $(FILES:%=$(SRCFOLDER)/%.cpp
OBJFOLDER = obj
OBJ = $(FILES:%=$(OBJFOLDER)/%.o)
INCLFOLDER = include
INCLUDE = $(HEADERS:%=$(INCLFOLDER)/%.hpp)
RM = rm -f
GREEN = \033[32m
NC = \033[0m

all: $(NAME)
$(NAME): $(OBJ)
	@ echo "${GREEN}	Compiled object files${NC}"
	$(CXX) $(CXXFLAGS) -I ./$(INCLFOLDER) $(OBJ) -o $(NAME)
	@ echo "${GREEN}	Compiled" $(NAME) "${NC}"

$(OBJFOLDER)/%.o : $(SRCFOLDER)/%.cpp $(INCLUDE)
	@ mkdir -p $(OBJFOLDER)
	$(CXX) $(CXXFLAGS) $< -c -o $@

clean:
	$(RM) $(OBJ)
	@ echo "${GREEN}	Cleaned objects${NC}"

fclean: clean
	$(RM) $(NAME)
	@ echo "${GREEN}	Cleaned" $(NAME) "${NC}"

re: fclean all
