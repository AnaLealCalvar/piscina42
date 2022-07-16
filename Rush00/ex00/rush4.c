/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:31:42 by anleal            #+#    #+#             */
/*   Updated: 2022/07/12 18:25:50 by anleal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	rush(int x, in y);
void	ft_putchar(char a);
{
	int ny;
	int nx;
    ny =1;
	while(ny <= y)
   	{
       	nx =1;
        while	(nx <= x)
	}
			if	((ny ==1 && nx ==1) || (ny == y && nx == x))
            ft_putchar('A');
        else if	((ny ==1 && nx == x) || (ny == y && nx ==1))
            ft_putchar('C');
        else if ((ny == 1 || ny == y) || (nx == 1 || nx == x))
            ft_putchar('B');
        else
            ft_putchar(' ');
            nx++;
        }
        ft_putchar('\n');
		column = 1;
        ny++;
 void rush (int x, int y)
 void	ft_putchar(char a)
 void	bucle(int x, int y)
{
	int		numy;
	int		nu;
	numy = 1;
	while (numy <= y)
	{
		numx = 1;
		while (numx <= x)
		{
			if (numy == 1 && numx == 1)
				ft_putchar('A');
			else if ((numy == 1 && numx == x) || (numy == y && numx == 1))
				ft_putchar('C');
			else if (numy == y && numx == x)
				ft_putchar('A');
			else if ((numy == 1 || numy == y) || (numx == 1 || numx == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			numx++;
		}
		ft_putchar('\n');
		numy++;
	}
}
void	rush(int x, int y)
{
	if (x < 1 || y < 1)
		return ;
	else
		bucle(x, y);
}

