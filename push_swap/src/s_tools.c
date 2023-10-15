/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_tools.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faleite <faleite@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:11:15 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/14 15:11:15 by faleite          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*add_data(int argc, char **argv)
{
	t_stack	*node;
	int		i;

	node = NULL;
	i = 1;
	if (argc == 2)
		i = 0;
	while (argv && argv[i])
	{
		insert_end(&node, ft_atol(argv[i]));
		i++;
	}
	return (node);
}

void	len_sum(t_stack *root)
{
	t_stack	*curr;

	curr = root;
	while (curr != NULL)
	{
		data()->s_len++;
		data()->s_sum += curr->x;
		curr = curr->next;
	}
}

void	insert_end(t_stack **root, int value)
{
	t_stack	*new_node;
	t_stack	*curr;

	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		exit(1);
	new_node->next = NULL;
	new_node->x = value;
	if (!*root)
	{
		*root = new_node;
		return ;
	}
	curr = *root;
	while (curr->next)
		curr = curr->next;
	curr->next = new_node;
}

void	insert_begin(t_stack **root, int value)
{
	t_stack	*new_node;

	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		exit(1);
	new_node->x = value;
	new_node->next = *root;
	*root = new_node;
}

/* Remove an element of the stack (except the first element) */
void	remove_element(t_stack **root, int value)
{
	t_stack	*to_remove;
	t_stack	*curr;

	if (!*root)
		return ;
	curr = *root;
	while (curr && curr->next)
	{
		if (curr->next->x == value)
		{
			to_remove = curr->next;
			curr->next = curr->next->next;
			free(to_remove);
			return ;
		}
		curr = curr->next;
	}
}
