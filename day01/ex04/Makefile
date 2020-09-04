NAME = ex04
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -g
FILES = ex04
SRCFOLDER = src
SRC = $(FILES:%=$(SRCFOLDER)/%.cpp
OBJFOLDER = obj
OBJ = $(FILES:%=$(OBJFOLDER)/%.o)
RM = rm -f
GREEN = \033[32m
NC = \033[0m

all: $(NAME)
$(NAME): $(OBJ)
	@ echo "${GREEN}	Compiled object files${NC}"
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@ echo "${GREEN}	Compiled" $(NAME) "${NC}"

$(OBJFOLDER)/%.o : $(SRCFOLDER)/%.cpp
	@ mkdir -p $(OBJFOLDER)
	$(CXX) $(CXXFLAGS) $< -c -o $@

clean:
	$(RM) $(OBJ)
	@ echo "${GREEN}	Cleaned objects${NC}"

fclean: clean
	$(RM) $(NAME)
	@ echo "${GREEN}	Cleaned" $(NAME) "${NC}"

re: fclean all
