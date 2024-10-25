/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:08:25 by ddo-carm          #+#    #+#             */
/*   Updated: 2024/09/16 14:53:12 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		fact *= nb;
		nb--;
	}
	return (fact);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%i", ft_iterative_factorial(5));
	return (0);
} */
