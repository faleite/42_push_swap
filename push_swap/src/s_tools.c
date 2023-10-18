/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_tools.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:11:15 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/18 19:31:03 by faaraujo         ###   ########.fr       */
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
		data()->s_sum += curr->nbr;
		curr = curr->next;
	}
	data()->mean = data()->s_sum / data()->s_len;
}

void	check_sorting(t_stack **a, int argc, char **argv)
{
	t_stack	*curr;
	int		check;

	curr = *a;
	check = 0;
	while (curr->next)
	{
		if ((curr->nbr) > (curr->next->nbr))
			check++;
		curr = curr->next;
	}
	if (!check)
	{
		free_arr(argc, argv);
		free_stack(a);
		exit(1);
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
	new_node->nbr = value;
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

// void	insert_begin(t_stack **root, int value)
// {
// 	t_stack	*new_node;

// 	new_node = malloc(sizeof(t_stack));
// 	if (!new_node)
// 		exit(1);
// 	new_node->nbr = value;
// 	new_node->next = *root;
// 	*root = new_node;
// }

// /* Remove an element of the stack (except the first element) */
// void	remove_element(t_stack **root, int value)
// {
// 	t_stack	*to_remove;
// 	t_stack	*curr;

// 	if (!*root)
// 		return ;
// 	curr = *root;
// 	while (curr && curr->next)
// 	{
// 		if (curr->next->nbr == value)
// 		{
// 			to_remove = curr->next;
// 			curr->next = curr->next->next;
// 			free(to_remove);
// 			return ;
// 		}
// 		curr = curr->next;
// 	}
// }
