/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:00:23 by ddo-carm          #+#    #+#             */
/*   Updated: 2024/09/08 14:46:32 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
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
