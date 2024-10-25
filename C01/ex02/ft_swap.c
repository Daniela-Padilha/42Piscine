/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 10:38:17 by ddo-carm          #+#    #+#             */
/*   Updated: 2024/09/08 12:26:38 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <stdio.h>

int	main(void)
{
	int	n;
	int	x;
	
	n = 0;
	x = 20;
	printf("n = %i, x = %i\n", n, x);
	ft_swap(&n, &x);
	printf("n = %i, x = %i", n, x);
	return(0);
}
*/
