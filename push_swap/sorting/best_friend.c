/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_friend.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:43:37 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/20 19:53:15 by faaraujo         ###   ########.fr       */
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
			best = a->index;
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
	int	ra;
	int	rra;
	int	len;

	len = struct_len(node) + 1;
	ra = index - 1;
	rra = len - index;
	if (ra < rra)
		return (ra);
	else
		return (rra);
}

void	add_cost(t_stack **a, t_stack **b)
{
	t_stack	*curr;

	curr = *b;
	while (curr)
	{
		curr->cost = get_moves(*a, curr->best) + get_moves(*b, curr->index);
		curr = curr->next;
	}
}
