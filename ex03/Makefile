C++ := c++
RM := rm -rf
NAME := program
SRCS := main.cpp \
		Ice.cpp \
		Cure.cpp \
		AMateria.cpp \
		MateriaSource.cpp \
		Character.cpp
SRC := $(addprefix $(SRC_DIR), $(SRCS))
OBJ := $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	${C++} $^ -o ${NAME}

%.o: %.cpp
	${C++} -c $? -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHOMY: all clean fclean re 