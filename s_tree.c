/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_tree.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-joul <yel-joul@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   */
/*   Created: 2025/04/04 18:56:52 by yel-joul          #+#    #+#             */
/*   Updated: 2025/04/08 16:43:19 by yel-joul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	count_max_bits(int size)
{
	int	max_bits;

	max_bits = 0;
	while ((size - 1) >> max_bits != 0)
		max_bits++;
	return (max_bits);
}

static void	check_bit(t_info *info, int bit, int size)
{
	int	j;

	j = 0;
	while (j < size)
	{
		if (((info->stack_a[0] >> bit) & 1) == 0)
			pb(info);
		else
		{
			ra(info);
			write(1, "ra\n", 3);
		}
		j++;
	}
}

void	s_hundred(t_info *info)
{
	int	i;
	int	max_bits;
	int	size;

	size = info->top_a + 1;
	max_bits = count_max_bits(size);
	i = 0;
	while (i < max_bits)
	{
		check_bit(info, i, size);
		while (info->top_b >= 0)
			pa(info);
		i++;
	}
}
