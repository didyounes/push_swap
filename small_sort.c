/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-joul <yel-joul@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:49:21 by yel-joul          #+#    #+#             */
/*   Updated: 2025/04/09 01:30:47 by yel-joul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	s_four(t_info *s)
{
	int	min;

	min = f_min(s->stack_a, s->top_a);
	while (s->stack_a[0] != min)
	{
		rra(s);
		write (1, "rra\n", 4);
	}
	pb(s);
	s_tree(s);
	pa(s);
	return (0);
}

int	s_five(t_info *s)
{
	int	min;

	min = f_min(s->stack_a, s->top_a);
	while (s->stack_a[0] != min)
	{
		rra(s);
		write (1, "rra\n", 4);
	}
	pb(s);
	s_four(s);
	pa(s);
	return (0);
}

int	s_two(t_info *s)
{
	int	a;
	int	b;

	if (s->top_a == 1)
	{
		a = s->stack_a[0];
		b = s->stack_a[1];
		if (a > b)
		{
			sa(s);
			write(1, "sa\n", 3);
		}
	}
	return (0);
}
