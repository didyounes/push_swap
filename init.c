/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-joul <yel-joul@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:47:44 by yel-joul          #+#    #+#             */
/*   Updated: 2025/04/09 03:15:00 by yel-joul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	t_args(int argc, char **argv)
{
	int	t_count;
	int	i;

	t_count = 0;
	i = 1;
	while (i < argc && argv[i])
	{
		t_count += count_word(argv[i], ' ');
		i++;
	}
	return (t_count);
}

void	helper(void)
{
	write(2, "Error\n", 6);
	exit(1);
}
