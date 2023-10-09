/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:57:09 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/09 21:44:15 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"
# include "stdlib.h" // malloc, free, exit
# include "unistd.h" // write, read, close
# include "limits.h" // INT_MAX, INT_MIN
# include "stdio.h" // perror, printf

typedef struct s_stack
{
	int				a;
	int				b;
	struct s_stack	*next;
}	t_stack;

// typedef struct s_data
// {
// 	t_stack	a;
// 	t_stack	b;
// }	t_data;

/* Utils */
int			ft_strcmp(char *s1, char *s2);
char		**ft_split(char *str);
void		check_int_max(int argc, char **argv);
size_t		ft_strlen(const char *s);
long int	ft_atol(const char *str);

/* Check Arguments*/
void		validate_arguments(int argc, char **argv);
void		check_double(int argc, char **argv);
void		check_len(int argc, char **argv);
void		err_case(int argc, char **argv);
void		check_args(int argc, char **argv);
void		free_arr(int argc, char **argv);
void		null_args(char **argv);

/* stack utils */
void		insert_end(t_stack **root, int value);
void		add_data(t_stack **a, int argc, char **argv);
void		print_data(t_stack *node);
//t_data		*data(void);


#endif /* PUSH_SWAP_H */