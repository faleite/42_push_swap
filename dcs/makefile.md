# Makefile
- Exemplo for put object file in a directory
```Makefile
###############################################################################
#                                 VARIABLES                                   #
###############################################################################

# .SILENT:
NAME		= push_swap
CC			= cc
CFLAGS		= -Wall -Wextra -Werror -g#-fsanitize=address
SRC_DIR		= ./src
OBJ_DIR		= obj
FILES 		= check_args.c tools.c utils.c main.c s_tools.c
SRCS		= $(addprefix $(SRC_DIR)/,$(FILES))
OBJS		= $(addprefix $(OBJ_DIR)/,$(FILES:.c=.o))
PRINTF		= ./ft_printf/libftprintf.a
RM			= rm -f

# .c.o:
#  	$(CC) -c $< -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@
```