/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:00:20 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/21 17:58:51 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rrotate(t_stack **node)
{
	t_stack	*curr;
	t_stack	*last;

	if (!(*node) || !(*node)->next)
		return ;
	curr = *node;
	while (curr->next->next)
		curr = curr->next;
	last = curr->next;
	curr->next = NULL;
	last->next = *node;
	*node = last;
}

void	rra(t_stack **a)
{
	rrotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	rrotate(b);
	write(1, "rrb\n", 4);
}
