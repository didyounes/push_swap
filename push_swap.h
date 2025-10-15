/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-joul <yel-joul@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 14:09:22 by yel-joul          #+#    #+#             */
/*   Updated: 2025/04/08 16:36:07 by yel-joul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_info
{
	int	*stack_a;
	int	*stack_b;
	int	top_a;
	int	top_b;
	int	size;
	int	max_size;
}		t_info;

long	ft_atoi(char *n);
char	*ft_strchr(const char *s, int c);
void	index_stack(t_info *s);
void	process_args(char *arg, int **arr, int *size);
void	helper(void);

void	pa(t_info *s);
void	pb(t_info *s);
void	rra(t_info *s);
void	rrb(t_info *s);
void	rrr(t_info *s);
void	ra(t_info *s);
void	rb(t_info *s);
void	rr(t_info *s);
void	sa(t_info *s);
void	sb(t_info *s);
void	ss(t_info *s);

char	*ft_substr(char const *s, unsigned int start, int len);
int		count_word(const char *s, char d);
char	**ft_split(char const *s, char c);
int		check_dup(int arr[], int size);
void	*free_array(char **array, int i);
int		is_valid_number(char **argv);

int		s_two(t_info *s);
int		s_tree(t_info *stack_a);
int		s_four(t_info *s);
int		s_five(t_info *s);
void	s_hundred(t_info *s);

int		f_min(int *arr, int len);
int		sorted_stack(int *arr, int size);
int		t_args(int argc, char **argv);
#endif
