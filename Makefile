NAME = libfts.a
FLAGS = -Wall -Wextra -Werror

SRCS =	srcs/ft_bzero.s\
		srcs/ft_strcat.s\
		srcs/ft_isalpha.s\
		srcs/ft_isdigit.s\
		srcs/ft_isalnum.s\
		srcs/ft_isascii.s\
		srcs/ft_isprint.s\
		srcs/ft_toupper.s\
		srcs/ft_tolower.s\
		srcs/ft_puts.s\
		srcs/ft_strlen.s\
		srcs/ft_memset.s\
		srcs/ft_memcpy.s\
		srcs/ft_strdup.s\
		srcs/ft_cat.s\
		srcs/ft_islower.s\
		srcs/ft_isspace.s\
		srcs/ft_putchar.s\
		srcs/ft_putchar_fd.s\
		srcs/ft_putstr.s

OBJS = $(SRCS:.s=.o)
INC = -I inc

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@echo "libfts.a created"

%.o:%.s
	@nasm -f macho64 $< -o $@

test: $(NAME) main.c
	@gcc $(FLAGS) -g -c main.c $(INC)
	@gcc -o test main.o $(NAME)

clean:
	@rm -f $(OBJS) main.o

fclean: clean
	@rm -f $(NAME)
	@rm -f debug
	@rm -f test

re: fclean all

.PHONY: all clean fclean re