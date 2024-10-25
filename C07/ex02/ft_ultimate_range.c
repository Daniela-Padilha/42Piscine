/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:56:24 by ddo-carm          #+#    #+#             */
/*   Updated: 2024/09/22 14:12:18 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*nbr;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = max - min;
	nbr = (int *)malloc(sizeof(int) * i);
	if (nbr == NULL)
		return (-1);
	*range = nbr;
	i = 0;
	while (min < max)
	{
		nbr[i] = min;
		min++;
		i++;
	}
	return (i);
}

/*#include <stdio.h>
int	main(void)
{
    int min = 0;
    int max = 101;
    int *range;
    int size;
    int i = 0;
    size = ft_ultimate_range(&range, min, max);
    if (size == -1)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    if (range != NULL)
    {
        while (i < size)
        {
            printf("%d ", range[i]);
            i++;
        }
        printf("\n");
        free(range);
    }
    else
    {
        printf("Range is NULL\n");
    }
    return 0;
}*/
