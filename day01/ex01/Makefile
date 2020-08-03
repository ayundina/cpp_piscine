NAME = ex01
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -g
FILES = ex01
SRC = $(FILES:%=src/%.cpp)
OBJFOLDER = obj
OBJ = $(FILES:%=$(OBJFOLDER)/%.o)
RM = rm -f
GREEN = \033[32m
NC = \033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@ echo "${GREEN}	Compiled object files${NC}"
	$(CXX) $(CXXFLAGS) -I ./include $(OBJ) -o $(NAME)
	@ echo "${GREEN}	Compiled" $(NAME) "${NC}"

obj/%.o : src/%.cpp $(OBJFOLDER)
	$(CXX) $(CXXFLAGS) $< -c -o $@

$(OBJFOLDER):
	mkdir -p $(OBJFOLDER)

clean:
	$(RM) $(OBJ)
	@ echo "${GREEN}	Cleaned objects${NC}"

fclean: clean
	$(RM) $(NAME)
	@ echo "${GREEN}	Cleaned" $(NAME) "${NC}" 

re: fclean all