/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:18:31 by ddo-carm          #+#    #+#             */
/*   Updated: 2024/09/14 10:40:52 by ddo-carm         ###   ########.fr       */
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

/*
#include <unistd.h>
int main(void)
{
	if (ft_strlen("Hii") == 3)
		write(1, "ok\n", 3);
	return(0);
}
*/
