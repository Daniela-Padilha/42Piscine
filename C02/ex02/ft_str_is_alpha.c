/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:37:41 by ddo-carm          #+#    #+#             */
/*   Updated: 2024/09/14 10:25:58 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
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
	char str[] = "Olaaaaa";

	ft_str_is_alpha(str);
	if (ft_str_is_alpha(str) == 1)
		printf("1");
	else
		printf("0");
}
*/
