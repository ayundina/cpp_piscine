NAME = mindopen
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -g

FILES = main \
				a_instruction_class \
				queue_class \
				file_class \
				instruction_next_class \
				instruction_previous_class\
				instruction_increment_class \
				instruction_decrement_class \
				instruction_output_class \
				instruction_input_class \
				instruction_start_loop_class \
				instruction_end_loop_class

HEADERS = a_instruction_class \
				queue_class \
				file_class \
				instruction_next_class \
				instruction_previous_class\
				instruction_increment_class \
				instruction_decrement_class \
				instruction_output_class \
				instruction_input_class \
				instruction_start_loop_class \
				instruction_end_loop_class

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
