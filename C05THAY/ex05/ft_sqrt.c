/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sousa <sousa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 02:40:19 by sousa             #+#    #+#             */
/*   Updated: 2025/02/06 04:32:51 by sousa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

int	ft_sqrt(int nb)
{
	if (nb < 0) // como nao existe raiz quadrada real para n negativos
		return (0);

	
		double raiz = sqrt(nb); // calcula a raiz
		if (raiz == (int)raiz) // verifica se a raiz é um n inteiro
			return (int)raiz; // retorna a parte inteira da raiz
		return (0); // e se ela nao for um n int, retorna zero
}

int	main()
{
	printf("%d\n", ft_sqrt(7));
	return (0);
}