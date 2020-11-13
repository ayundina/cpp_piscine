NAME = megaphone
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
FILES = megaphone
SRCS = $(FILES:%=%.cpp)
OBJS = $(SRCS:.cpp=.o)
RM = rm -f
GREEN = \033[32m
NC = \033[0m

all: $(NAME)

$(NAME): $(OBJS)
	@ $(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@ echo "${GREEN}	Compiled" $(NAME) "${NC}"

$(OBJS): $(SRCS)
	@ $(CXX) $(CXXFLAGS) $(SRCS) -c
	@ echo "${GREEN}	Compiled object files${NC}"

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all