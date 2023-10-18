/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:57:09 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/18 21:21:16 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define INT_MAX 2147483647
# define INT_MIN -2147483648

# include "../ft_printf/ft_printf.h"
# include "stdlib.h" // malloc, free, exit
# include "unistd.h" // write, read, close
# include "stdio.h" // perror, printf

typedef struct s_stack
{
	int				nbr;
	int				cost;
	int				best;
	struct s_stack	*next;
}	t_stack;

typedef struct s_data
{
	int	s_len;
	int	s_sum;
	int	mean;
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
// void		insert_begin(t_stack **root, int value);
// void		remove_element(t_stack **root, int value);
void		insert_end(t_stack **root, int value);
void		print_data(t_stack *node);
void		free_stack(t_stack **root);
void		len_sum(t_stack *root);
void		check_sorting(t_stack **a, int argc, char **argv);
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
void		pa(t_stack **b, t_stack **a);
void		pb(t_stack **a, t_stack **b);

/* Sorting */
int			sort_2(t_stack **a);
int			sort_3(t_stack **a);
int			sort_4(t_stack **a, t_stack **b);
int			sort_5(t_stack **a, t_stack **b);
int			sort_bigger(t_stack **a, t_stack **b);
void		pos_3(t_stack **a, t_stack **b);
void		pos_4(t_stack **a, t_stack **b);
void		sorting(t_stack **a, t_stack **b);
int			best_friend(t_stack *a, int xofb);

#endif /* PUSH_SWAP_H */