/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-joul <yel-joul@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 12:27:58 by yel-joul          #+#    #+#             */
/*   Updated: 2025/04/08 15:01:58 by yel-joul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	shift_up(int *stack, int *top)
{
	int	i;

	i = *top + 1;
	while (i > 0)
	{
		stack[i] = stack[i - 1];
		i--;
	}
	(*top)++;
}

static void	shift_down(int *stack, int *top)
{
	int	i;

	i = 0;
	while (i < *top)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	(*top)--;
}

void	pa(t_info *s)
{
	if (s->top_b < 0)
		return ;
	shift_up(s->stack_a, &s->top_a);
	s->stack_a[0] = s->stack_b[0];
	shift_down(s->stack_b, &s->top_b);
	write (1, "pa\n", 3);
}

void	pb(t_info *s)
{
	if (s->top_a < 0)
		return ;
	shift_up(s->stack_b, &s->top_b);
	s->stack_b[0] = s->stack_a[0];
	shift_down(s->stack_a, &s->top_a);
	write (1, "pb\n", 3);
}
