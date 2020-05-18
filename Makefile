NAME 			= push_swap
CFLAGS 			= -Wall -Werror -Wextra
LIBD 			= libft/
LIB 			= $(LIBD)libft.a
LIB_LINK 		= -L $(LIBD) -lft
INCLUDES 		= -I $(LIBD)includes -I ./includes
SRCS 			= src/main.c 			src/checker.c				src/ops.c			src/create_stack.c \
				  	src/stack_sort.c		src/sort.c				src/init.c			src/misc.c \
					src/ft_atoi.c			src/ft_putchar.c		src/ft_putnbr.c 	src/ft_putstr.c \
					src/ft_strcmp.c 		src/ft_strlen.c	\
					src/ft_isdigit.c		src/ft_isspace.c		src/ft_putnbr_fd.c 	src/ft_putchar_fd.c
OBJS 			= $(SRCS:src/%.c=obj/%.o)

all: obj $(NAME)

$(NAME): $(LIB) $(OBJS)
	@gcc $(CFLAGS) $(LIB_LINK) -o $@ $^
	@echo "Compiling" [ $(NAME) ]

$(LIB):
	@make -C $(LIBD)

obj: 
	@mkdir -p obj

obj/%.o: src/%.c ./includes/*.h
	@gcc $(CFLAGS) $(INCLUDES) -c -o $@ $<
	@echo "Linking" [ $< ]

clean:
	@rm -f $(OBJS)
	@rm -rf obj
	@echo "Cleaning" [ $(NAME) ]

fclean: clean
	@rm -f $(NAME)
	@make -C $(LIBD) fclean
	@echo "Delete" [ $(NAME) ]

re: fclean all

.PHONY: clean all re fclean