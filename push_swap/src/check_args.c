/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 19:03:11 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/05 21:47:58 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	check_args(int argc, char **argv)
{
	if (argc == 1 || !argv[1][0])
		exit(1);
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	if (validate_arguments(argc, argv))
		err_case(argc, argv);
	if (check_double(argv))
		err_case(argc, argv);
	if (check_len(argv))
		err_case(argc, argv);
	free_arr(argc, argv);
}

int	validate_arguments(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (argc > 2)
		i = 1;
	while (argv && argv[i])
	{
		j = 0;
		if (argv[i][j] == '-' || argv[i][j] == '+')
			j++;
		while (argv[i][j])
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_double(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv && argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (!ft_strcmp(argv[i], argv[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_len(char **argv)
{
	int	i;

	i = 0;
	while (argv && argv[i])
	{
		if (ft_strlen(argv[i]) > 11 && argv[i][0] == '-' || argv[i][0] == '+')
			return (1);
		if (argv[i][0] >= '0' && argv[i][0] <= '9')
		{
			if (ft_strlen(argv[i]) > 10)
				return (1);
		}
		i++;
	}
	return (0);
}
