/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:40:42 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/21 16:27:04 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	err_case(int argc, char **argv)
{
	write(2, "Error\n", 6);
	free_arr(argc, argv);
	exit(1);
}

void	free_arr(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc > 2)
		return ;
	while (argv && argv[i])
		free(argv[i++]);
	free(argv);
}

void	free_stack(t_stack **root)
{
	t_stack	*curr;
	t_stack	*aux;

	curr = *root;
	while (curr)
	{
		aux = curr;
		curr = curr->next;
		free(aux);
	}
	*root = NULL;
}
