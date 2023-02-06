
NAME = push_swap
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
CC = cc
SRC = push_rules.c push_rules_bis.c ft_create_elem.c ft_list_at.c ft_list_clear.c ft_list_foreach.c \
ft_list_last.c ft_list_push_back.c ft_list_push_front.c ft_list_size.c
OBJ = $(SRC:.c=.o)

all: $(NAME) 	

$(NAME): $(OBJ)
	@$(CC) $(OBJ)  -o $(NAME)
	@echo ---program linked---

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:	
	@$(RM) $(OBJ)
	@echo ---objects cleaned---

fclean: clean
	@$(RM) $(NAME)
	@echo ---program cleaned---
	@echo ---objects cleaned---

re: fclean all

.PHONY: all clean fclean re
