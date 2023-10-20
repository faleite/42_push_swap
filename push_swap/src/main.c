/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:04:46 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/20 22:24:38 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_nbr(t_stack *node);
void	print_best(t_stack *node);
void	print_index(t_stack *node);
void	print_cost(t_stack *node);
void	the_end(int argc, char **argv, t_stack *a, t_stack *b);

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
	check_sorting(&a, argc, argv);
	sorting(&a, &b);
	the_end(argc, argv, a, b);
	return (0);
}

/* DELETAR PRINTF */
void	the_end(int argc, char **argv, t_stack *a, t_stack *b)
{
	printf("Stack A:\n");
	print_nbr(a);
	printf("\nStack B:\n");
	print_nbr(b);
	printf("------\n");
	printf("Moves: %d\n", data()->moves);
	printf("------\n");
	free_arr(argc, argv);
	free_stack(&a);
	free_stack(&b);
}

/* DELETAR PRINTF */
void	print_nbr(t_stack *node)
{
	t_stack	*curr;

	curr = node;
	while (curr != NULL)
	{
		printf("%d ", curr->nbr);
		curr = curr->next;
	}
}

/* DELETAR PRINTF */
void	print_best(t_stack *node)
{
	t_stack	*curr;

	curr = node;
	printf("Friend: ");
	while (curr != NULL)
	{
		printf("%d ", curr->best);
		curr = curr->next;
	}
}

/* DELETAR PRINTF */
void	print_index(t_stack *node)
{
	t_stack	*curr;

	curr = node;
	printf("Index: ");
	while (curr != NULL)
	{
		printf("%d ", curr->index);
		curr = curr->next;
	}
}

/* DELETAR PRINTF */
// void	print_cost(t_stack *node)
// {
// 	t_stack	*curr;

// 	curr = node;
// 	printf("Cost: ");
// 	while (curr != NULL)
// 	{
// 		printf("%d ", curr->cost);
// 		curr = curr->next;
// 	}
// }
