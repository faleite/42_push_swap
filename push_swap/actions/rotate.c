/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:36:12 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/15 21:26:04 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate(t_stack **node)
{
	t_stack	*first;
	t_stack	*curr;

	if (!(*node) || !(*node)->next)
		return ;
	first = *node;
	*node = first->next;
	curr = *node;
	while (curr->next)
		curr = curr->next;
	curr->next = first;
	first->next = NULL;
}

void	ra(t_stack **node)
{
	rotate(node);
	data()->moves++;
	write(2, "ra\n", 3);
}

/* Option use fct insert_end (note good)
void	rotate(t_stack **node)
{
	t_stack *curr;
	
	if (!node || !(*node)->next)
		return ;
	curr = *node;
	*node = (*node)->next;
	insert_end(node, curr->x);
	free(curr);
}
*/

/* 2 3 4 5 1
1 
2
3
4
5 n -> 1 -
*/