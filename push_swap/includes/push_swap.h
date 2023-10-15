/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:57:09 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/15 20:02:30 by faaraujo         ###   ########.fr       */
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
	int				x;
	struct s_stack	*next;
}	t_stack;

typedef struct s_data
{
	int	s_len;
	int	s_sum;
	int	moves;
}	t_data;

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
void		insert_begin(t_stack **root, int value);
void		remove_element(t_stack **root, int value);
void		print_data(t_stack *node);
void		free_stack(t_stack **root);
void		len_sum(t_stack *root);
t_stack		*add_data(int argc, char **argv);
t_data		*data(void);

/* Actions */
void		swap(t_stack **node);
void		rotate(t_stack **node);
void		rrotate(t_stack **node);
void		push(t_stack **src, t_stack **dst);
void		sa(t_stack **node);
void		ra(t_stack **node);
void		rra(t_stack **node);

/* Sorting */
int			sort_2(t_stack **a);
int			sort_3(t_stack **a);
void		sorting(t_stack **a, t_stack **b);

#endif /* PUSH_SWAP_H */