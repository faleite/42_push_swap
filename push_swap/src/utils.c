/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:42:29 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/08 16:22:15 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

#define WD_NUM 2000
#define WD_LEN 13

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	**ft_split(char *str)
{
	char	**arr;
	int		j;
	int		k;

	arr = (char **)malloc(sizeof(char *) * WD_NUM);
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	j = 0;
	while (*str != '\0')
	{
		if (*str > 32)
		{
			k = 0;
			arr[j] = (char *)malloc(sizeof(char) * WD_LEN);
			while (*str > 32)
				arr[j][k++] = *str++;
			arr[j][k] = '\0';
			j++;
		}
		else
			str++;
	}
	arr[j] = 0;
	return (arr);
}

long int	ft_atol(const char *str)
{
	int			i;
	int			sig;
	long int	res;

	i = 0;
	sig = 1;
	res = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sig = -1;
		i++;
	}
	if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
		return (0);
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		res *= 10;
		res += str[i] - '0';
		++i;
	}
	return (res * sig);
}

void	check_int_max(int argc, char **argv)
{
	int	i;

	i = 0;
	while (argv && argv[i])
	{
		if (ft_atol(argv[i]) > INT_MAX || ft_atol(argv[i]) < INT_MIN)
			err_case(argc, argv);
		i++;
	}
}
