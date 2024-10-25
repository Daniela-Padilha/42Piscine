/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:59:33 by ddo-carm          #+#    #+#             */
/*   Updated: 2024/09/14 10:30:16 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str [i] >= 'a' && str[i] <= 'z')
		{
			if (! (str[i - 1] >= 'a' && str[i - 1] <= 'z'))
			{
				if (! (str[i - 1] >= '0' && str[i - 1] <= '9'))
				{
					if (! (str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
					{
						str[i] -= 32;
					}
				}
			}
		}
		i++;
	}
	return (str);
}

/* #include <stdio.h>

int main(void)
{
	char str[] = "daniela, ola ? 42mots quarenta-dois; cinquenta+e+um";

	ft_strcapitalize(str);
	printf("%s", str);

} */
