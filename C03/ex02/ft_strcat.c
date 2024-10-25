/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:15:12 by ddo-carm          #+#    #+#             */
/*   Updated: 2024/09/14 10:36:48 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	lenght;

	i = 0;
	lenght = 0;
	if (src == NULL)
		return (0);
	while (dest[lenght] != '\0')
	{
		lenght++;
	}
	while (src[i] != '\0')
	{
		dest[lenght] = src[i];
		i++;
		lenght++;
	}
	dest[lenght] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char	s1[10] = "ola";
	char	s2[5] = "dani";

	ft_strcat(s1, s2);
	printf("%s", s1);
}
*/
