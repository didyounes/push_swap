/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-joul <yel-joul@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:23:03 by yel-joul          #+#    #+#             */
/*   Updated: 2025/04/08 14:25:09 by yel-joul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_info *info)
{
	int	tmp;
	int	i;

	if (info->top_a < 1)
		return ;
	tmp = info->stack_a[info->top_a];
	i = info->top_a;
	while (i > 0)
	{
		info->stack_a[i] = info->stack_a[i - 1];
		i--;
	}
	info->stack_a[0] = tmp;
}

void	rrb(t_info *info)
{
	int	tmp;
	int	i;

	if (info->top_b < 1)
		return ;
	tmp = info->stack_b[info->top_b];
	i = info->top_b;
	while (i > 0)
	{
		info->stack_b[i] = info->stack_b[i - 1];
		i--;
	}
	info->stack_b[0] = tmp;
}

void	rrr(t_info *info)
{
	rra(info);
	rrb(info);
	write (1, "rrr\n", 4);
}
