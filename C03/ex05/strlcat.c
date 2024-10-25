/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 10:19:18 by ddo-carm          #+#    #+#             */
/*   Updated: 2024/09/22 13:02:16 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (i < size && dest[i] != '\0')
		i++;
	while ((i + j + 1) < size && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i != size)
		dest[i + j] = '\0';
	return (i + ft_strlen(src));
}

/*#include <stdio.h>

int	main(void)
{
	char	s1[10] = "ola";
	char	s2[5] = "dani";

	ft_strlcat(s1, s2, 888888888);
	printf("%s", s1);
}*/
