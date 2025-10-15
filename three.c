/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-joul <yel-joul@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 23:22:34 by yel-joul          #+#    #+#             */
/*   Updated: 2025/04/08 23:22:35 by yel-joul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	cases_1_2_3(t_info *s, int case_num)
{
	if (case_num == 1)
	{
		sa(s);
		write(1, "sa\n", 3);
		ra(s);
		write(1, "ra\n", 3);
	}
	else if (case_num == 2)
	{
		sa(s);
		write(1, "sa\n", 3);
	}
	else if (case_num == 3)
	{
		rra(s);
		write(1, "rra\n", 4);
	}
}

static void	cases_4_5(t_info *s, int case_num)
{
	if (case_num == 4)
	{
		ra(s);
		write(1, "ra\n", 3);
	}
	else if (case_num == 5)
	{
		sa(s);
		write(1, "sa\n", 3);
		rra(s);
		write(1, "rra\n", 4);
	}
}

int	s_tree(t_info *s)
{
	int	a;
	int	b;
	int	c;

	if (s->top_a >= 2)
	{
		a = s->stack_a[0];
		b = s->stack_a[1];
		c = s->stack_a[2];
		if (a < b && b < c)
			return (0);
		else if (a < b && b > c && a < c)
			cases_1_2_3(s, 1);
		else if (a > b && a < c && b < c)
			cases_1_2_3(s, 2);
		else if (a < b && a > c && b > c)
			cases_1_2_3(s, 3);
		else if (a > b && a > c && b < c)
			cases_4_5(s, 4);
		else if (a > b && b > c)
			cases_4_5(s, 5);
	}
	return (0);
}
