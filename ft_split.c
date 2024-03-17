/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oba <oba@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:58:39 by oba               #+#    #+#             */
/*   Updated: 2024/03/17 16:37:28 by oba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	void	libere(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free (tab[i]);
		i++;
	}
	free (tab);
}

static	int	mots(const char *s, char c)
{
	int	i;
	int	word;

	word = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			word++;
		while (s[i] != c && s[i])
			i++;
	}
	return (word);
}

static	char	*ft_word(char const *s, char c, int *i)
{
	int		j;
	int		k;
	char	*str;

	j = *i;
	k = 0;
	while (s[*i] != c && s[*i])
		(*i)++;
	str = malloc(sizeof(char) * (*i - j + 1));
	if (!str)
		return (NULL);
	while (j < *i)
	{
		str[k] = s[j];
		k++;
		j++;
	}
	str[k] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		x;
	int		total;
	int		mot;

	total = mots(s, c);
	x = 0;
	mot = 0;
	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (total + 1));
	if (!tab)
		return (NULL);
	while (s[x] && mot < total)
	{
		while (s[x] == c && s[x])
			x++;
		tab[mot] = ft_word(s, c, &x);
		if (!tab[mot])
			return (libere(tab), NULL);
		mot++;
	}
	tab[mot] = NULL;
	return (tab);
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
//     printf("%i",mots(tab, trim));
// }