/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:57:09 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/08 17:09:57 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"
# include "stdlib.h" // malloc, free, exit
# include "unistd.h" // write, read, close
# include "limits.h" // INT_MAX, INT_MIN
# include "stdio.h" // perror, printf

/* Utils */
int			ft_strcmp(char *s1, char *s2);
char		**ft_split(char *str);
void		check_int_max(int argc, char **argv);
size_t		ft_strlen(const char *s);
long int	ft_atol(const char *str);

/* Check Arguments*/
void		validate_arguments(int argc, char **argv);
void		check_double(int argc, char **argv);
void		check_len(int argc, char **argv);
void		err_case(int argc, char **argv);
void		check_args(int argc, char **argv);
void		free_arr(int argc, char **argv);
void		null_args(char **argv);

#endif /* PUSH_SWAP_H */