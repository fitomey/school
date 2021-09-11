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

void ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b == 0)
	{
		return;
	}
	*mod = a % b;
	*div = a / b;
}


int main(void)
{
	int i1 = 30;
	int i2 = 10;
	int m = 0;
	int d = 0;
	ft_putnbr(i1);
	ft_putnbr(i2);
	ft_div_mod(i1, i2, &d, &m);
	ft_putchar(' ');
	ft_putnbr(m);
	ft_putchar(' ');
	ft_putnbr(d);
	
	return 0;
}