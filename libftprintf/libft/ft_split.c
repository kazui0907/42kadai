/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryochik <kryochik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:53:19 by kryochik          #+#    #+#             */
/*   Updated: 2024/04/22 04:08:38 by kryochik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ori_count_words(const char *s, char c)
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

char	*ori_copy_segment(const char *s, int start, int length)
{
	char	*segment;

	segment = malloc(length + 1);
	if (segment == NULL)
		return (NULL);
	ft_strlcpy(segment, s + start, length + 1);
	return (segment);
}

int	ori_word_segment(const char **s_ptr, char c, char **result, int *index_ptr)
{
	const char	*start;
	int			word_len;

	start = *s_ptr;
	word_len = 0;
	while (**s_ptr && **s_ptr != c)
	{
		(*s_ptr)++;
		word_len++;
	}
	result[*index_ptr] = ori_copy_segment(start, 0, word_len);
	if (result[*index_ptr] == NULL)
		return (0);
	(*index_ptr)++;
	return (1);
}

char	**ori_fill_splits(const char *s, char c, int count)
{
	char	**result;
	int		i;

	result = malloc((count + 1) * sizeof(char *));
	i = 0;
	if (!result)
		return (NULL);
	while (*s && i < count)
	{
		if (*s != c && !ori_word_segment(&s, c, result, &i))
		{
			while (--i >= 0)
				free(result[i]);
			free(result);
			return (NULL);
		}
		s++;
	}
	result[i] = NULL;
	return (result);
}

// char	**ori_fill_splits(const char *s, char c, int count)
// {
// 	char **result;
// 	int i;
// 	int word_len;
// 	const char *start;

// 	result = malloc((count + 1) * sizeof(char *));
// 	if (!result)
// 		return (NULL);
// 	i = 0;
// 	word_len = 0;
// 	while (*s)
// 	{
// 		if (*s != c && word_len ==0)
// 		{
// 			start = s;
// 			while (*s && *s != c)
// 			{
// 				s++;
// 				word_len++;
// 			}
// 			result[i++] = ori_copy_segment(start, 0, word_len);
// 			if (result[i -1] == NULL)
// 			{
// 				while (--i >= 0)
// 					free (result[i]);
// 				free (result);
// 				return (NULL);
// 			}
// 			word_len = 0;
// 		}
// 		else
// 			s++;
// 	}
// 	result[i] = NULL;
// 	return (result);
// }

char	**ft_split(const char *s, char c)
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
// 	char const *str = "hello,,world,this,is,a,test";
// 	char **split = ft_split(str, ',');
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