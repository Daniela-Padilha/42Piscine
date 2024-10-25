/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:59:35 by ddo-carm          #+#    #+#             */
/*   Updated: 2024/09/14 10:28:15 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lenght;

	i = 0;
	lenght = 0;
	if (src == NULL)
		return (0);
	while (src[lenght] != '\0')
	{
		lenght++;
	}
	if (size != 0)
	{
		while (i < size -1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (lenght);
}
/*
#include <stdio.h>

int main(void)
{
	char str1[10] = "Hello";
	char str2[] = "Ola";
	unsigned int	n = 3;
	
	ft_strlcpy(str1, str2, n);
	printf("%s\n", str1);
}
*/
