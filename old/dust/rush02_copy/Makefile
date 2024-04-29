NAME = rush-02

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
SRCS = $(wildcard srcs/*.c)
OBJS = $(SRCS:srcs/%.c=%.o)
HDRS = -I includes

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
