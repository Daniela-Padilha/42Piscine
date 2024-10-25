/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:28:39 by ddo-carm          #+#    #+#             */
/*   Updated: 2024/09/14 10:26:03 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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
	char str[] = "Aaaa";

	ft_str_is_numeric(str);
	if (ft_str_is_numeric(str) == 1)
		printf("1");
	else
		printf("0");
}
*/
