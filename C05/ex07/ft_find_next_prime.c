/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:50:15 by ddo-carm          #+#    #+#             */
/*   Updated: 2024/09/23 12:24:30 by ddo-carm         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	if (ft_is_prime(nb) == 0)
	{
		while (ft_is_prime(nb) == 0)
			nb++;
	}
	return (nb);
}

/*#include <stdio.h>
int main(void)
{
	printf("nb = 1, res = %i\n", ft_find_prime_next(1));
	printf("nb = 0, res = %i\n", ft_find_prime_next(2));
	printf("nb = 5, res = %i\n", ft_find_prime_next(4));
	return (0);
}*/
