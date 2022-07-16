/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:52:40 by anleal            #+#    #+#             */
/*   Updated: 2022/07/14 16:03:38 by anleal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_things(char primer_num, char  segundo_num, char tercer_num)
{ 
	write(1, &primer_num, 1);
	write(1, &segundo_num, 1);
	write(1, &tercer_num, 1);
	if (! (primer_num == '7' && segundo_num =='8' && tercer_num == '9'))
			write(1 , " ,", 2);
}

void	ft_print_comb(void)
{
		char	primer_num;
		char	segundo_num;
		char	tercer_num;

		primer_num = '0';
		segundo_num = '0';
		tercer_num = '0';
		while (primer_num <= '7')
		{ 
			segundo_num = primer_num + 1;

			while (segundo_num <= '8')
			{	
				tercer_num = segundo_num + 1;
				while (tercer_num <= '9')
				{ 
					ft_print_things(primer_num, segundo_num, tercer_num);	
					tercer_num++;
				}
				segundo_num++;
			}
			primer_num++;
		}
}	

int main (void)
{
	ft_print_comb();
	return (0);
}

