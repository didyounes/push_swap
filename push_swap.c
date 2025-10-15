/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-joul <yel-joul@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:07:16 by yel-joul          #+#    #+#             */
/*   Updated: 2025/04/09 01:33:49 by yel-joul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static void	parse_args(int argc, char **argv, int **arr, int *size)
{
	int (t_count), i = 1;
	t_count = t_args(argc, argv);
	*arr = malloc(sizeof(int) * t_count);
	*size = 0;
	if (*arr == NULL)
		helper();
	while (i < argc)
	{
		if (ft_strchr(argv[i], ' '))
			process_args(argv[i], arr, size);
		else
		{
			if (!is_valid_number(&argv[i]))
			{
				write(2, "Error\n", 6);
				free(*arr);
				exit(1);
			}
			(*arr)[*size] = ft_atoi(argv[i]);
			(*size)++;
		}
		i++;
	}
}

static void	cleanup_and_exit(t_info *s, int code)
{
	if (s->stack_a)
		free(s->stack_a);
	if (code == 1 && s->stack_b)
		free(s->stack_b);
	exit(code);
}

static void	init_stack(int argc, char **argv, t_info *s)
{
	if (argc < 2)
		exit(0);
	s->stack_a = NULL;
	s->stack_b = NULL;
	s->size = 0;
	parse_args(argc, argv, &s->stack_a, &s->size);
	if (s->size == 0)
		cleanup_and_exit(s, 0);
	s->top_a = s->size - 1;
	s->stack_b = malloc(sizeof(int) * s->size);
	if (!s->stack_b)
	{
		write(2, "Error\n", 6);
		free(s->stack_a);
		exit(1);
	}
	s->top_b = -1;
	if (check_dup(s->stack_a, s->size) == 0)
	{
		write(2, "Error\n", 6);
		free(s->stack_a);
		free(s->stack_b);
		exit(1);
	}
}

void	process_stack(t_info *s)
{
	if (!sorted_stack(s->stack_a, s->top_a))
	{
		if (s->size == 2)
			s_two(s);
		else if (s->size == 3)
			s_tree(s);
		else if (s->size == 4)
			s_four(s);
		else if (s->size == 5)
			s_five(s);
		else
		{
			index_stack(s);
			s_hundred(s);
		}
	}
	free(s->stack_a);
	free(s->stack_b);
}

int	main(int argc, char *argv[])
{
	t_info	s;

	init_stack(argc, argv, &s);
	process_stack(&s);
	return (0);
}
