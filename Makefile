NAME = libftprintf.a
INCLUDE = -I./include
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar -rcs

OBJECTS = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS:.c=.o)

SRC = 	ft_printf.c\
		ft_converter.c\
		ft_printf_utils.c

BONUS =	ft_printf_bonus.c\
		ft_converter_bonus.c\
		ft_printf_utils_bonus.c\
		converter_utils.c

all: $(NAME)

$(NAME): $(OBJECTS)
		 $(AR) $(NAME) $(OBJECTS)

bonus: $(BONUS_OBJ)
		 $(AR) $(NAME) $(BONUS_OBJ)

.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
		$(RM) $(OBJECTS) $(BONUS_OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

norm:
			norminette ${SRC} ${BONUS}

.PHONY:		all bonus clean fclean re norm