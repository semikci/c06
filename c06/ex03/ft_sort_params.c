/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:08:10 by sekmekci          #+#    #+#             */
/*   Updated: 2023/09/14 17:39:04 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_size(char **str, int t)
{
	int	i;

	i = 0;
	while (str[t][i])
		i++;
	return (i);
}

void	ft_sort_int_tab(char **tab, int f)
{
	int	i;
	int	j;
	int	temp;

	j = 1;
	while (j < f)
	{
		i = 0;
		while (i < ft_size(tab, f))
		{
			if (tab[j][i] == tab[j + 1][i])
				i++;
			else if(tab[j][i] > tab[j + 1][i])
				{}
		}
		j++;
	}
	printf ("%s\n",tab[f]);
}

void	ft_compare(int k, char **str)
{
	ft_sort_int_tab(str, k);
}

int	main(int argc, char **argv)
{
	ft_compare(argc, argv);
}
