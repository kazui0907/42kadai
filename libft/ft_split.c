/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kazui <kazui@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:53:19 by kryochik          #+#    #+#             */
/*   Updated: 2024/04/18 11:30:31 by kazui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ori_count_words(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (s == NULL)
		return (-1);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (count);
}

char	*ori_copy_segment(const char *s, int start, char c, char **result)
{
	int		i;
	int		length;
	int		index;
	char	*segment;

	i = start;
	while (s[i] != '\0' && s[i] != c)
		i++;
	length = i - start;
	segment = malloc(length + 1);
	if (segment == NULL)
		return (NULL);
	ft_memcpy(segment, s + start, length);
	segment[length] = '\0';
	index = 0;
	while (result[index] != NULL)
		index++;
	result[index] = segment;
	return (segment);
}

char	**ori_fill_splits(char const *s, char c, char **result)
{
	int	f_index;
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			if (ori_copy_segment(s, i, c, result) == NULL)
				return (NULL);
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
		else
		{
			i++;
		}
	}
	f_index = 0;
	while (result[f_index] != NULL)
		f_index++;
	result[f_index] = NULL;
	return (result);
}

char	**ft_split(const char *s, char c)
{
	int		count;
	char	**result;

	if (s == NULL)
		return (NULL);
	count = ori_count_words(s, c);
	if (count < 0)
		return (NULL);
	result = malloc((count + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	if (ori_fill_splits(s, c, result) == NULL)
		return (NULL);
	return (result);
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