/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush01.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vroth-di <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/03 14:19:47 by vroth-di     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/03 14:32:36 by vroth-di    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	hauteur(int x, int y)
{
	int a;
	int b;

	a = 0;
	b = 0;
	if (y > 1)
	{
		while (b < y - 2)
		{
			a = 0;
			ft_putchar('*');
			while (a < x - 2)
			{
				ft_putchar(' ');
				a++;
			}
			if (x > 1)
				ft_putchar('*');
			ft_putchar('\n');
			b++;
		}
	}
}

void	p_ligne(int x)
{
	int a;
	int b;

	a = 0;
	b = 0;
	if (x > 1)
		ft_putchar('/');
	while (a < x - 2)
	{
		ft_putchar('*');
		a++;
	}
	ft_putchar(92);
	write(1, "\n", 1);
}

void	d_ligne(int x, int y)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (y > 1)
	{
		a = 0;
		ft_putchar(92);
		while (a < x - 2)
		{
			ft_putchar('*');
			a++;
		}
		if (x > 1)
			ft_putchar('/');
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		p_ligne(x);
		hauteur(x, y);
		d_ligne(x, y);
	}
}
