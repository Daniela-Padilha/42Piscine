/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:09:32 by ddo-carm          #+#    #+#             */
/*   Updated: 2024/09/14 10:12:48 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	if (src == NULL)
		return (0);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* #include <stdio.h>

int	main(void)
{
	char	str1[] = "Hello";
	char	str2[] = "Ola";
	
	printf("Antes str1 = %s e str2 = %s \n", str1, str2);
	printf("Depois str1 = %s e str2 = %s", ft_strcpy(str1, str2),str2);
}
*/