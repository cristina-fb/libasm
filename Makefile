CC = gcc

NAME = libasm.a

CFLAGS = 
MAIN = main.c

TEST = test

SRC = ft_strlen.s \
		ft_strcpy.s \
		ft_strcmp.s \
		ft_write.s \
		ft_read.s \
		ft_strdup.s

OBJ = $(SRC:.s=.o)
OBJ_TEST = $(MAIN:.c=.o)


all: $(TEST)

$(NAME): $(OBJ)
	ar -r $(NAME) $(OBJ)

$(TEST): $(NAME)
	$(CC) $(CFLAGS) $(OBJ) $(MAIN) -o $(TEST)

%.o: %.s
	nasm -f elf64 -o $@ $<

clean:
	rm -rf $(OBJ) $(OBJ_TEST)

fclean:	clean
	rm -rf $(NAME) $(TEST)

re: fclean all

.PHONY: all clean fclean re