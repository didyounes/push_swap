/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-joul <yel-joul@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:27:33 by yel-joul          #+#    #+#             */
/*   Updated: 2025/04/08 15:02:53 by yel-joul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_info *s)
{
	int	tmp;

	if (s->top_a < 1)
		return ;
	tmp = s->stack_a[0];
	s->stack_a[0] = s->stack_a[1];
	s->stack_a[1] = tmp;
}

void	sb(t_info *s)
{
	int	tmp;

	if (s->top_b < 1)
		return ;
	tmp = s->stack_b[0];
	s->stack_b[0] = s->stack_b[1];
	s->stack_b[1] = tmp;
}

void	ss(t_info *s)
{
	sa(s);
	sb(s);
	write (1, "ss\n", 3);
}
