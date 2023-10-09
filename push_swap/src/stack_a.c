/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:11:15 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/09 21:44:45 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	add_data(t_stack **a, int argc, char **argv)
{
	int	i;

	a = NULL;
	i = 1;
	if (argc == 2)
		i = 0;
	while (argv && argv[i])
	{
		insert_end(&a, ft_atol(argv[i]));
		i++;
	}
	print_data(*a);
}

void	print_data(t_stack *node)
{
	t_stack *curr;

	curr = node;
	while (curr != NULL)
	{
		ft_printf("%d\n", curr->a);
		curr = curr->next;
	}
}