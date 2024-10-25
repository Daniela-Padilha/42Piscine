/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 09:38:13 by ddo-carm          #+#    #+#             */
/*   Updated: 2024/09/17 11:41:59 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	res;

	res = 0;
	if (index == 0)
		return (0);
	if (index < 0)
		return (-1);
	if (index == 1)
		return (1);
	if (index > 0)
		res = ft_fibonacci(index -1) + ft_fibonacci(index -2);
	return (res);
}

/*#include <stdio.h>
int	 main(int argc, char **argv)
{
	printf("%i", ft_fibonacci(4));
	return (0);
}*/
