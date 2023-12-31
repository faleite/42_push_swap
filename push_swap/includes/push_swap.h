/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:57:09 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/21 15:42:22 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define INT_MAX 2147483647
# define INT_MIN -2147483648

# include "stdlib.h" // malloc, free, exit
# include "unistd.h" // write, read, close

typedef struct s_stack
{
	int				nbr;
	int				index;
	int				best;
	int				cost;
	struct s_stack	*next;
}	t_stack;

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
void		the_end(int argc, char **argv, t_stack *a, t_stack *b);

/* stack utils */
void		insert_end(t_stack **root, int value);
void		free_stack(t_stack **root);
void		rotation_a(t_stack **a, int index);
void		rotation_b(t_stack **b, int index);
int			cost_win(t_stack *b);
int			check_sorting(t_stack **a);
int			struct_len(t_stack *root);
int			struct_sum(t_stack *root);
t_stack		*add_data(int argc, char **argv);

/* Actions */
void		swap(t_stack **node);
void		rotate(t_stack **node);
void		rrotate(t_stack **node);
void		push(t_stack **src, t_stack **dst);
void		sa(t_stack **node);
void		ra(t_stack **a);
void		rra(t_stack **a);
void		rb(t_stack **b);
void		rrb(t_stack **b);
void		pa(t_stack **b, t_stack **a);
void		pb(t_stack **a, t_stack **b);

/* Sorting */
void		sort_2(t_stack **a);
void		sort_3(t_stack **a);
void		sort_4(t_stack **a, t_stack **b);
void		sort_5(t_stack **a, t_stack **b);
void		sort_bigger(t_stack **a, t_stack **b);
void		pos_3(t_stack **a, t_stack **b);
void		pos_4(t_stack **a, t_stack **b);
void		sorting(t_stack **a, t_stack **b);
void		add_best_friend(t_stack *a, t_stack **b);
void		add_index(t_stack **node);
void		add_cost(t_stack **a, t_stack **b);
void		moves_top(t_stack **a, t_stack **b);
void		call_functions(t_stack **a, t_stack **b);
void		last_rotates(t_stack **a);
int			get_moves(t_stack *node, int index);
int			best_friend(t_stack *a, int nbr_b);

#endif /* PUSH_SWAP_H */