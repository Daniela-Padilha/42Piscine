/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:23:37 by ddo-carm          #+#    #+#             */
/*   Updated: 2024/09/23 12:25:09 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>
int main(void)
{
	printf("nb = 1, res = %i\n", ft_is_prime(1));
	printf("nb = 0, res = %i\n", ft_is_prime(0));
	printf("nb = 5, res = %i\n", ft_is_prime(5));
	return (0);
}*/
