NAME = libfts.a
FLAGS = -Wall -Wextra -Werror

SRCS =	srcs/ft_isprint.s\
		srcs/ft_isdigit.s\
		srcs/ft_isalpha.s\
		srcs/ft_isalnum.s\
		srcs/ft_isascii.s\
		srcs/ft_toupper.s\
		srcs/ft_tolower.s

OBJS = $(SRCS:.s=.o)

INC = -I inc
PATH = srcs/

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@echo "libfts.a created"

%.o:%.s
	@nasm -f macho64 $< -o $@

test: $(NAME) main.c
	@gcc -c main.c $(INC)
	@gcc -o test main.o $(NAME) $(FLAGS)

clean:
	@rm -f $(OBJS) main.o

fclean: clean
	@rm -f $(NAME) test

re: fclean all

.PHONY: all clean fclean re