/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleal <anleal@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 11:58:04 by anleal            #+#    #+#             */
/*   Updated: 2022/07/15 12:21:54 by anleal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unisd.h >

void ft_print_n(int n)
{
	char  a1;
	char  a2;

	a1 = n / 10 + '0';
	a2 = n % 10 + '0';
	write(1, &a1, 1)
		write (1, &a2, 2)
}	
void ft_print_comb2(void)
{
	int x;
	int y; 

	x = 0;
	while (x < 99)
    {
		Y = y + 1;
		while (y < 100)
    	{
			ft_print_n(x);
			write(1, ' ', 1)
			ft_print_n(y);
			if(x!=98 || y!= 99)	
				write(1, ",", 2);
			b++;

		} 
	}
}	

