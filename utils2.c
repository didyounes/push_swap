/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-joul <yel-joul@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 15:11:52 by yel-joul          #+#    #+#             */
/*   Updated: 2025/04/08 16:47:22 by yel-joul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atoi(char *n)
{
	long	result;
	int		sign;
	int		i;

	result = 0;
	sign = 1;
	i = 0;
	while (n[i] == ' ' || (n[i] >= 9 && n[i] <= 13))
		i++;
	if (n[i] == '-' || n[i] == '+')
	{
		if (n[i] == '-')
			sign = sign * -1;
		i++;
	}
	while ((n[i] >= '0') && (n[i] <= '9'))
	{
		result = (result * 10) + ((n[i]) - '0');
		i++;
	}
	return (result * sign);
}

int	h_func(char **argv)
{
	int (j), i = 0;
	while (argv[i])
	{
		j = 0;
		if (argv[i][0] == '\0')
			return (0);
		while (argv[i][j])
		{
			while (argv[i][j] == ' ' || argv[i][j] == '\t')
				j++;
			if (argv[i][j] == '-' || argv[i][j] == '+')
				j++;
			if (argv[i][j] < '0' || argv[i][j] > '9')
				return (0);
			while (argv[i][j] >= '0' && argv[i][j] <= '9')
				j++;
			if (argv[i][j] != '\0' && argv[i][j] != ' ' && argv[i][j] != '\t')
				return (0);
			while (argv[i][j] == ' ' || argv[i][j] == '\t')
				j++;
		}
		i++;
	}
	return (1);
}

int	is_valid_number(char **argv)
{
	long	result;
	int		i;

	if (!h_func(argv))
		return (0);
	i = 0;
	while (argv[i])
	{
		result = ft_atoi(argv[i]);
		if (result > INT_MAX || result < INT_MIN)
			return (0);
		i++;
	}
	return (1);
}

int	f_min(int *arr, int len)
{
	int	min;
	int	i;

	i = 0;
	min = arr[0];
	while (i <= len)
	{
		if (min > arr[i])
			min = arr[i];
		i++;
	}
	return (min);
}

int	sorted_stack(int *arr, int size)
{
	int	i;

	i = 0;
	if (size <= 0)
		return (1);
	while (i < size)
	{
		if (arr[i] > arr[i + 1])
			return (0);
		i++;
	}
	return (1);
}
