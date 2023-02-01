
NAME = push_swap
LIB = lib.a
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
CC = cc
AR = ar rcs
SRC = 
OBJ = $(SRC:.c=.o)

all: $(NAME) $(LIB)	

$(NAME): $(OBJ)
	@$(CC) $(OBJ)  -o $(NAME)
	@echo ---program linked---

$(LIB): $(OBJ)
	@$(AR) $(LIB) $(OBJ)
	@echo ---library generated---

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:	
	@$(RM) $(OBJ)
	@echo ---objects cleaned---

fclean: clean
	@$(RM) $(NAME) $(LIB)
	@echo ---program cleaned---
	@echo ---library cleaned---

re: fclean all

.PHONY: all clean fclean re
