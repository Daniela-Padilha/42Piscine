/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 11:10:29 by ddo-carm          #+#    #+#             */
/*   Updated: 2024/09/08 11:26:08 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

int main(void)
{
	int x;
	int i;
	int div;
	int mod;
	
	x = 10;
	i = 2;

	ft_div_mod(x, i, &div, &mod);
	printf("Division is %i, module is %i", div, mod);
	return 0;
} */
