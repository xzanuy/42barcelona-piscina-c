/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzanuy-f <xzanuy-f@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:51:28 by xzanuy-f          #+#    #+#             */
/*   Updated: 2021/12/08 18:26:23 by xzanuy-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>
#include <unistd.h>

void	ft_print_combn(int);

void	main()
{
        ft_print_combn(1);
}

void	ft_print_combn(int n)
{
	int i;
	int aux;

	i + 0;
	while (i <= 9)
	{
		aux = i + 48;
		write(1, &aux, 1);
		i++;
	}
/*	if (nb < 0)
	{
		write(1, "-", 1);
		n = n * (-1);
	}

	if (n < 10)
	{
		aux = n + 48;
		write(1, &aux, 1);
	}
	
	while (n > 9)
	{
			put_nbr(n / 10);
			n = n % 10;
		   	while (i < 9)
			{
				i++;

			}
			aux	= n + 48;
			write(1, &aux, 1);
	}*/
}

