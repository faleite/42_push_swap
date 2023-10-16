/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:04:46 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/16 19:05:32 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	the_end(int argc, char **argv, t_stack *a, t_stack *b)
{
	print_data(a);
	ft_printf("\n------\n");
	print_data(b);
	ft_printf("\n------\n");
	ft_printf("Moves: %d\n", data()->moves);
	free_arr(argc, argv);
	free_stack(&a);
	free_stack(&b);
}

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
	sorting(&a, &b);
	the_end(argc, argv, a, b);
	return (0);
}
