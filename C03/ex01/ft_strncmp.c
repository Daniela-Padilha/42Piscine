/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 09:14:00 by ddo-carm          #+#    #+#             */
/*   Updated: 2024/09/14 10:36:31 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char	s1[3] = "aBz";
	char	s2[3] = "aBg";

	int res = ft_strncmp(s1, s2, 3);
	if (res == 0)
	{
		printf("0");
	}
	else
		printf("%i", res);
}
*/
