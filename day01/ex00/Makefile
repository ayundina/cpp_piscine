NAME = pony
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -g
FILES = main Pony
HEADERS = Pony
SRC = $(FILES:%=src/%.cpp)
OBJ = $(FILES:%=obj/%.o)
INCLUDE = $(HEADERS:%=include/%.hpp)
RM = rm -f
GREEN = \033[32m
NC = \033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@ echo "${GREEN}	Compiled object files${NC}"
	$(CXX) $(CXXFLAGS) -I ./include $(OBJ) -o $(NAME)
	@ echo "${GREEN}	Compiled" $(NAME) "${NC}"

obj/%.o : src/%.cpp $(INCLUDE)
	$(CXX) $(CXXFLAGS) $< -c -o $@

clean:
	$(RM) $(OBJ)
	@ echo "${GREEN}	Cleaned objects${NC}"

fclean: clean
	$(RM) $(NAME)
	@ echo "${GREEN}	Cleaned" $(NAME) "${NC}" 

re: fclean all