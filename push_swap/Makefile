###############################################################################
#                                 VARIABLES                                   #
###############################################################################

# .SILENT:
NAME		= push_swap
CC			= cc
CFLAGS		= -Wall -Wextra -Werror -g#-fsanitize=address
RM			= rm -f
FILES 		= ./src/check_args.c \
			  ./src/tools.c \
			  ./src/utils.c \
			  ./src/main.c \
			  ./src/s_tools.c\
			  ./src/sorting.c\
			  ./actions/swap.c \
			  ./actions/rotate.c \
			  ./actions/rrotate.c \
			  ./actions/push.c \
			  ./sorting/smaller_sorting.c \
			  ./sorting/bigger_sorting.c \
			  ./sorting/best_friend.c \
			  ./sorting/move_to_top.c
OBJS		= $(FILES:.c=.o)

# .c.o:
#  	$(CC) -c $< -o $@

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
#		clear
		@echo "$(GREEN)Compiling of $(RED)$(NAME)...$(CLR_RESET)"
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
		@echo "$(RED)$(NAME) $(GREEN)is ready!$(CLR_RESET)\n"
		@echo "$(PURPLE)====================================$(CLR_RESET)"

clean:
		$(RM) $(OBJS)
#		clear
		@echo "$(RED)$(NAME) object $(GREEN)files have been deleted.$(CLR_RESET)\n"

fclean: clean
		$(RM) $(NAME)
		@echo "$(RED)$(NAME) $(GREEN)has been deleted.$(CLR_RESET)\n"
#		clear

re: fclean all
	@echo "$(RED)$(NAME) $(GREEN)has been recompiled.$(CLR_RESET)\n"
	@echo "$(PURPLE)====================================$(CLR_RESET)"

v:
	make re && clear && valgrind --leak-check=full --show-leak-kinds=all ./push_swap "1 2 3 4""5"

.PHONY: all clean fclean re
