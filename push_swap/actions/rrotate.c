/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:00:20 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/12 20:40:58 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rrotate(t_stack **node)
{
	t_stack	*curr;
	t_stack	*last;

	if (!node || !(*node)->next)
		return ;
	curr = *node;
	while (curr->next->next)
		curr = curr->next;
	last = curr->next;
	curr->next = NULL;
	last->next = *node;
	*node = last;
}

/* Option use fct insert_begin and remove_element (note good)
void	rrotate(t_stack **node)
{
	t_stack *curr;
	
	if (!node || !(*node)->next)
		return ;
	curr = *node;
	while (curr && curr->next)
		curr = curr->next;
	insert_begin(node, curr->x);
	remove_element(node, curr->x);
}
*/
