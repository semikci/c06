/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:52:54 by sekmekci          #+#    #+#             */
/*   Updated: 2023/09/14 17:21:55 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	int	k;

	k = 1;
	while(k < argc)
	{
		i = 0;
		while(argv[k][i] != 0)
		{
			write(1, &argv[k][i], 1);
			i++;
		}
		write(1, "\n", 1);
		k++;
	}
}