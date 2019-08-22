/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush03.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vroth-di <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/03 14:38:31 by vroth-di     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/03 14:41:49 by vroth-di    ###    #+. /#+    ###.fr     */
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
			ft_putchar('B');
			while (a < x - 2)
			{
				ft_putchar(' ');
				a++;
			}
			if (x > 1)
				ft_putchar('B');
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
		ft_putchar('A');
	while (a < x - 2)
	{
		ft_putchar('B');
		a++;
	}
	write(1, "C\n", 2);
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
		ft_putchar('A');
		while (a < x - 2)
		{
			ft_putchar('B');
			a++;
		}
		if (x > 1)
			ft_putchar('C');
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
