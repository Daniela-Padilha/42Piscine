/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:24:58 by ddo-carm          #+#    #+#             */
/*   Updated: 2024/09/14 10:37:03 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	length;

	i = 0;
	length = 0;
	if (src == NULL)
		return (0);
	while (dest[length] != '\0')
	{
		length++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[length] = src[i];
		i++;
		length++;
	}
	dest[length] = '\0';
	return (dest);
}

/* #include <stdio.h>

int	main(void)
{
	char	s1[10] = "ola";
	char	s2[5] = "dani";

	ft_strncat(s1, s2, 3);
	printf("%s", s1);
}
*/
