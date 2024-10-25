/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:27:38 by ddo-carm          #+#    #+#             */
/*   Updated: 2024/09/14 10:26:14 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}

/*
#include <stdio.h>

int main(void)
{
	char str[] = "aaa";

	ft_str_is_lowercase(str);
	if (ft_str_is_lowercase(str) == 1)
		printf("1");
	else
		printf("0");
}
*/
