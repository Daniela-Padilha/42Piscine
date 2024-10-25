/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:19:18 by ddo-carm          #+#    #+#             */
/*   Updated: 2024/09/14 11:07:17 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str != NULL)
	{
		while (str[i] != '\0')
		{
			write(1, &str[i], 1);
			i++;
		}
	}
}

/*
#include <stdio.h>

int	main(void)
{
	ft_putstr("Hello");
	return (0);
}
*/
