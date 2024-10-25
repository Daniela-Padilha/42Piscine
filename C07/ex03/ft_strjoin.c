/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:08:21 by ddo-carm          #+#    #+#             */
/*   Updated: 2024/09/22 15:41:38 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		c;

	str = (char *)malloc(sizeof(strs) + sizeof(sep) * (size - 1));
	i = 0;
	c = 0;
	if (str == NULL)
	{
		str = NULL;
		return (str);
	}
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			str[c++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
			str[c++] = sep[j++];
		i++;
	}
	str[c] = '\0';
	return (str);
}

#include <stdio.h>
int main(int argc, char **argv)
{
	char *separator = ", ";
	if (argc < 2)
	{
		printf("No strings provided.\n");
		return (1);
	}
	
	char *result = ft_strjoin(argc - 1, &argv[1], separator);
	if (result)
	{
		printf("%s\n", result);
		free(result);
	}
	else
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	return (0);
}
