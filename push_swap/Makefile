###############################################################################
#                                 VARIABLES                                   #
###############################################################################

# .SILENT:
NAME		= push_swap
CC			= cc
CFLAGS		= -Wall -Wextra -Werror -g#-fsanitize=address
SRC_DIR		= ./src
OBJ_DIR		= obj
FILES 		= check_args.c tools.c utils.c main.c s_utils.c stack_a.c
SRCS		= $(addprefix $(SRC_DIR)/,$(FILES))
OBJS		= $(addprefix $(OBJ_DIR)/,$(FILES:.c=.o))
PRINTF		= ./ft_printf/libftprintf.a
RM			= rm -f

# .c.o:
#  	$(CC) -c $< -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

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
		@echo "$(GREEN)Compiling of $(RED)ft_printf...$(CLR_RESET)"
		@make -C ft_printf
#		clear
		@echo "$(GREEN)Compiling of $(RED)$(NAME)...$(CLR_RESET)"
		$(CC) $(CFLAGS) $(OBJS) $(PRINTF) -o $(NAME)
#		clear
		@echo "$(RED)$(NAME) $(GREEN)is ready!$(CLR_RESET)\n"
		@echo "$(PURPLE)====================================$(CLR_RESET)"

clean:
		$(RM) -r $(OBJ_DIR)
		@make clean -C ft_printf
#		clear
		@echo "$(RED)$(NAME) object $(GREEN)files have been deleted.$(CLR_RESET)\n"

fclean: clean
		$(RM) $(NAME)
		@echo "$(RED)$(NAME) $(GREEN)has been deleted.$(CLR_RESET)\n"
		$(RM) $(PRINTF)
		@echo "$(RED)printf $(GREEN)has been deleted.$(CLR_RESET)\n"
#		clear

re: fclean all
	@echo "$(RED)$(NAME) $(GREEN)has been recompiled.$(CLR_RESET)\n"
	@echo "$(PURPLE)====================================$(CLR_RESET)"


v:
	make re && clear && valgrind --leak-check=full --show-leak-kinds=all ./push_swap

.PHONY: all clean fclean re
