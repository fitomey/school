#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	int pos;
	pos = 1;
	if (nb < 0)
	{
		pos = -1;
	}
	if (nb == 0)
	{
		ft_putchar('0');
	}
	int n[10] = {0};
	int i;
	i = 1000000000;
	int ch;
	ch = 0;
	while (i >= 1)
	{
		if (pos == -1)
		{
			n[ch] = (nb / i) * (-1);
		}
		else
		{
			n[ch] = nb / i;
		}
		nb = nb % i;
		i = i / 10;
		ch += 1;
	}
	int f;
	f = 0;
	while (n[f] == 0)
	{
		f += 1;
	}
	if (pos == -1)
	{
		ft_putchar('-');
	}
	while (f <= 9)
	{
		ft_putchar(n[f]+'0');
		f += 1;
	}
	
	
}

void ft_putinttab(int *tab, int size)
{
	int i = 0;
	while (i < size)
	{
		ft_putnbr(tab[i]);
		ft_putchar(' ');
		i += 1;
	}
}

void ft_rev_int_tab(int *tab, int size)
{
	int i = 0;
	int c = 0;
	while (i <= (size / 2) - 1)
	{
		c = tab[i];
		tab[i] = tab[(size - i) - 1];
		tab[(size - i) - 1] = c;
		i += 1;
	}
}


int main(void)
{
	int tb[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *t = tb;
	ft_putinttab(t, 9);
	ft_rev_int_tab(t, 9);
	ft_putinttab(t, 9);
	
	return 0;
}