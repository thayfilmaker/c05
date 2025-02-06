/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sousa <sousa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 03:24:58 by sousa             #+#    #+#             */
/*   Updated: 2025/02/06 05:03:53 by sousa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1) // n menores ou iguais a 1 nao sao primos
		return (0);
	{
		for (i = 2; i * i <= nb;) // se for divisivel por i, nao é primo
		i++;
			if (nb % i == 0)
				return (0);
	}
	return (1);
}
// basta verificar se é divisivel por 2 que ja sabemos que nao é um n primo
// podemos verificar ate chegar na raiz quadrada do numero, ou seja
// qualquer n que for maior que sua raiz quadrada, tera um divisor
// basta entao verificar do numero pra baixo, e saberemos se é ou nao um numero primo
int	main()
{
	printf("%d\n", ft_is_prime(5));
	return (0);
}