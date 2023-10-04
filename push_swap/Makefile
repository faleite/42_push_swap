###############################################################################
#                                 VARIABLES                                   #
###############################################################################

# .SILENT:
NAME		= push_swap
CC			= cc
CFLAGS		= -Wall -Wextra -Werror -g #-fsanitize=address
SRC_DIR		= src
FILES 		= $(foreach dir, $(SRC_DIR), $(wildcard $(dir)/*.c))
OBJS		= $(FILES:.c=.o)
PRINTF		= ./ft_printf/libftprintf.a
RM			= rm -f

# .c.o:
#	$(CC) $(CFLAGS) -c -o $@ $< $(INCLUDES)

.c.o:
	$(CC) -c $< -o $@

################################################################################
#                                 COLORS                                       #
################################################################################

CLR_RESET	= \033[0m
RED		    = \033[1;31m
GREEN		= \033[1;32m
YELLOW		= \033[1;33m
BLUE		= \033[1;34m
CYAN 		= \033[1;36m
PURPLE 		= \033[0;35m

###############################################################################
#                                 SCRIPT                                      #
###############################################################################

all: $(NAME)

$(NAME): $(OBJS)

		@make -C ft_printf
#		clear
		@echo "$(GREEN)Compiling of $(RED)$(NAME)...$(CLR_RESET)"
		$(CC) $(CFLAGS) $(OBJS) $(PRINTF) -o $(NAME)
		@echo "$(RED)$(NAME) $(GREEN)is ready!$(CLR_RESET)\n"
		@echo "$(PURPLE)====================================$(CLR_RESET)"

clean:
		$(RM) $(OBJS)
		@make clean -C ft_printf
#		clear
		@echo "$(RED)$(NAME) object $(GREEN)files have been deleted.$(CLR_RESET)\n"

fclean: clean
		$(RM) $(NAME)
		$(RM) $(PRINTF)
		clear
		@echo "$(RED)$(NAME) $(GREEN)has been deleted.$(CLR_RESET)\n"
		@echo "$(RED)printf $(GREEN)has been deleted.$(CLR_RESET)\n"
		@echo "$(RED)libft $(GREEN)has been deleted.$(CLR_RESET)\n"

re: fclean all
	@echo "$(RED)$(NAME) $(GREEN)has been recompiled.$(CLR_RESET)\n"
	@echo "$(PURPLE)====================================$(CLR_RESET)"


v:
	make re && clear && valgrind --leak-check=full --show-leak-kinds=all ./push_swap

.PHONY: all clean fclean re
