/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-joul <yel-joul@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 14:37:31 by yel-joul          #+#    #+#             */
/*   Updated: 2025/04/09 01:29:40 by yel-joul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	process_args(char *arg, int **arr, int *size)
{
	char	**args;
	int		j;

	j = 0;
	args = ft_split(arg, ' ');
	if (args == NULL)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	while (args[j] != NULL)
	{
		if (!is_valid_number(&args[j]))
		{
			write(2, "Error\n", 6);
			free_array(args, j);
			free(*arr);
			exit(1);
		}
		(*arr)[*size] = ft_atoi(args[j]);
		(*size)++;
		j++;
	}
	free_array(args, j);
}

int	check_dup(int arr[], int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
