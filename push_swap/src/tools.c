/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:40:42 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/19 19:30:13 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	err_case(int argc, char **argv)
{
	write(2, "Error\n", 7);
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

t_data	*data(void)
{
	static t_data	d;

	return (&d);
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
