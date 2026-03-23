NAME = libft.a
HEADER = libft.h 
CFLAGS = -Wall -Wextra -Werror -I.$(HEADER)
CC = gcc
SRCS = 		ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c

OBJS = $(SRCS:.c=.o)
AR = ar -rcs

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(AR) $(NAME) $(OBJS) $(HEADER)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re