/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:00:32 by ddo-carm          #+#    #+#             */
/*   Updated: 2024/09/24 14:30:11 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcpy(char *str)
{
	char	*cpy;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(str);
	cpy = (char *)malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
		return (NULL);
	while (i < len)
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*a;
	int			i;

	i = 0;
	a = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (a == NULL)
		return (NULL);
	while (i < ac)
	{
		a[i].size = ft_strlen(av[i]);
		a[i].str = av[i];
		a[i].copy = ft_strcpy(av[i]);
		i++;
	}
	a[i].size = 0;
	a[i].str = NULL;
	a[i].copy = NULL;
	return (a);
}
