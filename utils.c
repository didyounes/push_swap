/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-joul <yel-joul@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:27:51 by yel-joul          #+#    #+#             */
/*   Updated: 2025/04/08 16:48:30 by yel-joul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_substr(char const *s, unsigned int start, int len)
{
	char	*result;
	int		i;

	if (s == NULL)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

int	count_word(const char *s, char d)
{
	int	count;
	int	in_word;
	int	i;

	count = 0;
	in_word = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != d && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (s[i] == d && in_word == 1)
			in_word = 0;
		i++;
	}
	return (count);
}

void	*free_array(char **array, int i)
{
	while (i--)
		free(array[i]);
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**a_str;
	int		i;
	int		j;

	a_str = malloc((count_word(s, c) + 1) * sizeof(char *));
	if (a_str == NULL || s == NULL)
		return (NULL);
	j = 0;
	while (*s)
	{
		i = 0;
		while (*s == c)
			s++;
		while (s[i] && s[i] != c)
			i++;
		if (i > 0)
		{
			a_str[j] = ft_substr(s, 0, i);
			if (a_str[j++] == NULL)
				return (free_array(a_str, j - 1));
		}
		s += i;
	}
	a_str[j] = NULL;
	return (a_str);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
