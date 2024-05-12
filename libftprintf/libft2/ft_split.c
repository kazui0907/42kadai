/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:53:19 by kryochik          #+#    #+#             */
/*   Updated: 2024/05/09 12:13:32 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ori_count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*ori_copy_segment(char const *s, int start, int length)
{
	char	*segment;

	segment = malloc(length + 1);
	if (segment == NULL)
		return (NULL);
	ft_strlcpy(segment, s + start, length + 1);
	return (segment);
}

static int	ori_word_segment(char const **s_ptr, char c, char **result,
		int *i_ptr)
{
	char const	*start;
	int			word_len;

	start = *s_ptr;
	word_len = 0;
	while (**s_ptr && **s_ptr != c)
	{
		(*s_ptr)++;
		word_len++;
	}
	result[*i_ptr] = ori_copy_segment(start, 0, word_len);
	if (result[*i_ptr] == NULL)
		return (0);
	(*i_ptr)++;
	return (1);
}

static char	**ori_fill_splits(char const *s, char c, int count)
{
	char	**result;
	int		i;

	result = malloc((count + 1) * sizeof(char *));
	i = 0;
	if (!result)
		return (NULL);
	while (*s && i < count)
	{
		if (i != 0)
			s++;
		if (*s != c && !ori_word_segment(&s, c, result, &i))
		{
			while (--i >= 0)
				free(result[i]);
			free(result);
			return (NULL);
		}
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int	count;

	if (!s)
		return (NULL);
	count = ori_count_words(s, c);
	while (*s == c)
		s++;
	return (ori_fill_splits(s, c, count));
}
// int	main(void)
// {
// 	// char const *str = "hello,,world,this,is,a,test";
// 	char **split = ft_split("xxxxxxxxhello!", 'x');
// 	if (split != NULL)
// 	{
// 		for (int k = 0; split[k] != NULL; k++)
// 		{
// 			printf("split[%d]: '%s'\n", k, split[k]);
// 			free(split[k]);
// 		}
// 		free(split);
// 	}
// 	else
// 	{
// 		printf("Failed to allocate memory.\n");
// 	}
// 	return (0);
// }