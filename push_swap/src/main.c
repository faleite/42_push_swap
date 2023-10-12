/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:04:46 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/12 21:42:54 by faaraujo         ###   ########.fr       */
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
	push(&a, &b);
	push(&a, &b);
	push(&a, &b);
	push(&b, &a);
	print_data(a);
	ft_printf("--------\n");
	print_data(b);
	free_arr(argc, argv);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
