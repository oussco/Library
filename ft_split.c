/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oba <oba@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:58:39 by oba               #+#    #+#             */
/*   Updated: 2024/03/13 19:55:23 by oba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	wordcount(const char *str, char c)
{
	int	i;
	int	cm;

	i = 0;
	cm = 0;
	while (*str)
	{
		if (*str != c && cm == 0)
		{
			cm = 1;
			i++;
		}
		else if (*str == c)
			cm = 0;
		str++;
	}
	return (i);
}

char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	i = 0;
	j = 0;
	index = -1;
	split = malloc((wordcount(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}

// int	main(void)
// {
// 	char	tab[] = "allo!:) maman c'est ous";
// 	char	trim = ' ';
// 	char	**chad = ft_split(tab,trim);
// 		if (!chad)
// 			return ((int)NULL);
//     int i = 0;
//     while (chad[i] != NULL)
//     {
//         printf("%s\n", chad[i]);
//         free(chad[i]);
//         i++;
//     }
//     free(chad);
//     printf("%i",ft_wordcount(tab, trim));
// }