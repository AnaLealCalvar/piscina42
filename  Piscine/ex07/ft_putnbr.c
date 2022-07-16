/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleal <anleal@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 13:53:37 by anleal            #+#    #+#             */
/*   Updated: 2022/07/15 15:13:23 by anleal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ftputchar(chat n)
{
	write(1 , &n, 1);
}	

void ft_putnumber(int n)
{ 
	if (n < 10 && NB >=  0)
	{ 
		ft_putchar(n '0');
	}
	else if(n >= 10)
	{
		f_putnumber(n / 10);
		ft_puchar(n % 10 + '0');
    }
	else if (nb == -217483648)
    {
		write(1, "-217483648", 11)
	}		
	else
	{ 
		write(1, "-", 1);
		ft_putnumber(n * -1);
	}

}

