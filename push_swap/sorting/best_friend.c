/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_friend.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:43:37 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/19 22:32:10 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	best_friend(t_stack *a, int nbr_b)
{
	int	friend;
	int	best;
	int	temp;

	friend = INT_MAX;
	best = INT_MAX;
	while (a)
	{
		temp = a->nbr - nbr_b;
		if (temp < friend && a->nbr > nbr_b)
		{
			friend = temp;
			best = a->nbr;
		}
		a = a->next;
	}
	if (best == INT_MAX)
		return (-1);
	return (best);
}

void	add_best_friend(t_stack *a, t_stack **b)
{
	t_stack	*curr_b;

	curr_b = *b;
	while (curr_b)
	{
		curr_b->best = best_friend(a, curr_b->nbr);
		curr_b = curr_b->next;
	}
}

void	add_index(t_stack **node)
{
	t_stack	*curr;
	int		i;

	curr = *node;
	i = 1;
	while (curr)
	{
		curr->index = i++;
		curr = curr->next;
	}
}

int	get_moves(t_stack *node, int index)
{
	int		ra;
	int		rra;
	int		len;

	len = struct_len(node) + 1;
	ra = index - 1;
	rra = len - index;
	if (ra < rra)
		return (ra);
	else
		return (rra);
}

// void	add_cost(t_stack **a, t_stack **b)
// {
// 	t_stack	*curr;

// 	get_moves(a);
// 	get_moves(b);

// 	curr = *b;
// 	while (curr)
// 	{
// 		//curr->cost = custo de best + curr->cost
// 		curr = curr->next;
// 	}
// }

/*
	cost = move of best(b) + move of b 

	nb > 21 id > 4 len > 5
	move ra: 3 = id - 1
	move rra: 2 = (len + 1) - id

	7 1 = 0
	2 4 = 1
	3 5 = 2
	10 21 = 2
	6 52 = 1
*/
// int	get_cost(t_stack *node, int nbr)
// {
// 	int	s_len;

// 	s_len = struct_len(node);
// }
