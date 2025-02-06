/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sousa <sousa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 04:35:19 by sousa             #+#    #+#             */
/*   Updated: 2025/02/06 05:12:51 by sousa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 1)
	{
		nb++;
	}
	for (i = 2; i * i <= nb;) // se for divisivel por i, nao é n primo
	{
		i++; 
	}
	if (nb % i == 0)
	{
		nb++;
	}
	return nb;
}

int	main()
{
	printf("%d\n", ft_find_next_prime(5)); //o numero 1 nao é considerado primo, pois para ser n primo ele precisa ser dividido por 2 numeros
		return (0);
}