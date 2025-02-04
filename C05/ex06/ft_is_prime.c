/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 23:25:25 by mabarros          #+#    #+#             */
/*   Updated: 2025/02/04 13:07:11 by mabarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	count;
	int	i;

	i = 1;
	count = 0;
	if (nb <= 1)
	{
		return (0);
	}
	while (i <= nb)
	{
		if (nb % i == 0)
		{
			count++;
		}
		i++;
	}
	if (count > 2)
		return (0);
	return (1);
}
/*
int	main(void)
{
	printf("%i", ft_is_prime(2));
	return (0);
}*/
