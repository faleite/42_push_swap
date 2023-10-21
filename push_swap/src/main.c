/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:04:46 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/21 15:27:24 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;

	b = NULL;
	if (argc == 1)
		exit(1);
	null_args(argv);
	if (argc == 2)
		argv = ft_split(argv[1]);
	check_args(argc, argv);
	a = add_data(argc, argv);
	if (!check_sorting(&a))
	{
		free_arr(argc, argv);
		free_stack(&a);
		exit(1);
	}
	sorting(&a, &b);
	the_end(argc, argv, a, b);
	return (0);
}

void	the_end(int argc, char **argv, t_stack *a, t_stack *b)
{
	free_arr(argc, argv);
	free_stack(&a);
	free_stack(&b);
}
