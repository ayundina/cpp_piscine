NAME = cato9tails
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -g -std=c++98

FILES = main ClassCat ClassFile
HEADERS = ClassCat ClassFile

SRCFOLDER = src
SRC = $(FILES:%=$(SRCFOLDER)/%.cpp
OBJFOLDER = obj
OBJ = $(FILES:%=$(OBJFOLDER)/%.o)
INCLFOLDER = include
INCLUDE = $(HEADERS:%=$(INCLFOLDER)/%.hpp)
RM = rm -rf
GREEN = \033[32m
NC = \033[0m

all: $(NAME)
$(NAME): $(OBJ)
	@ echo "${GREEN}	Compiled object files${NC}"
	@ $(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@ echo "${GREEN}	Compiled" $(NAME) "${NC}"

$(OBJFOLDER)/%.o : $(SRCFOLDER)/%.cpp $(INCLUDE)
	@ mkdir -p $(OBJFOLDER)
		$(CXX) $(CXXFLAGS) -I $(INCLFOLDER) $< -c -o $@

clean:
	@ $(RM) $(OBJFOLDER)
	@ echo "${GREEN}	Removed $(OBJFOLDER)${NC}"

fclean: clean
	@ $(RM) $(NAME)
	@ echo "${GREEN}	Removed $(NAME) ${NC}"

re: fclean all
