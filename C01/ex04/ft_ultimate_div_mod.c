/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 11:51:06 by ddo-carm          #+#    #+#             */
/*   Updated: 2024/09/08 12:00:47 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*
#include <stdio.h>

int main(void)
{
	int x;
	int i;
	
	x = 10;
	i = 2;

	ft_ultimate_div_mod(&x, &i);
	printf("Division is %i, module is %i",x, i);
	return 0;
}
*/
