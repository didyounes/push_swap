/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-joul <yel-joul@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:32:11 by yel-joul          #+#    #+#             */
/*   Updated: 2025/04/08 16:41:01 by yel-joul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*copy_stack_values(t_info *s)
{
	int	i;
	int	*new;

	new = (int *)malloc(sizeof(int) * (s->top_a + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (i <= s->top_a)
	{
		new[i] = s->stack_a[i];
		i++;
	}
	return (new);
}

static void	sort_array(int *array, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

static void	get_index_values(t_info *s, int *sorted, int *index_value)
{
	int	i;
	int	j;

	i = 0;
	while (i <= s->top_a)
	{
		j = 0;
		while (j <= s->top_a)
		{
			if (s->stack_a[i] == sorted[j])
			{
				index_value[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
}

void	index_stack(t_info *s)
{
	int	*sorted;
	int	*index_value;
	int	i;

	sorted = copy_stack_values(s);
	index_value = (int *)malloc(sizeof(int) * (s->top_a + 1));
	if (!sorted || !index_value)
	{
		if (sorted)
			free(sorted);
		if (index_value)
			free(index_value);
		return ;
	}
	sort_array(sorted, s->top_a + 1);
	get_index_values(s, sorted, index_value);
	i = 0;
	while (i <= s->top_a)
	{
		s->stack_a[i] = index_value[i];
		i++;
	}
	free(sorted);
	free(index_value);
}
