/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 08:53:21 by ddo-carm          #+#    #+#             */
/*   Updated: 2024/09/05 12:29:32 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				ft_putchar(x);
				ft_putchar(y);
				ft_putchar(z);
				if (x != '7' || y != '8' || z != '9')
					write(1, ", ", 2);
				z++;
			}
			y++;
		}
		x++;
	}
}

/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
