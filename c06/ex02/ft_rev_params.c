/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:04:27 by sekmekci          #+#    #+#             */
/*   Updated: 2023/09/14 13:07:26 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;

	while((argc-1) != 0)
	{
		i = 0;
		while(argv[argc-1][i] != 0)
		{
			write(1, &argv[argc-1][i], 1);
			i++;
		}
		write(1, "\n", 1);
		argc--;
	}
}