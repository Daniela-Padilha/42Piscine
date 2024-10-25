/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 08:37:53 by ddo-carm          #+#    #+#             */
/*   Updated: 2024/09/14 10:35:47 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>

int	main(void)
{
	char	s1[3] = "bBC";
	char	s2[3] = "gBC";

	int res = ft_strcmp(s1, s2);
	if (res == 0)
	{
		printf("0");
	}
	else
		printf("%i", res);
}
*/
