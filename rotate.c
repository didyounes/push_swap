/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-joul <yel-joul@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:06:31 by yel-joul          #+#    #+#             */
/*   Updated: 2025/04/08 15:06:47 by yel-joul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ra(t_info *s)
{
	int	tmp;
	int	i;

	if (s->top_a < 1)
		return ;
	tmp = s->stack_a[0];
	i = 0;
	while (i < s->top_a)
	{
		s->stack_a[i] = s->stack_a[i + 1];
		i++;
	}
	s->stack_a[s->top_a] = tmp;
}

void	rb(t_info *s)
{
	int	tmp;
	int	i;

	if (s->top_b < 1)
		return ;
	tmp = s->stack_b[0];
	i = 0;
	while (i < s->top_b)
	{
		s->stack_b[i] = s->stack_b[i + 1];
		i++;
	}
	s->stack_b[s->top_b] = tmp;
}

void	rr(t_info *s)
{
	ra(s);
	rb(s);
	write (1, "rr\n", 3);
}
