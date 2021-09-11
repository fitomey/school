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

void	ft_swap(int *a, int *b)
{
	int y = 0;
	int *v = &y;
	*v = *a;
	*a = *b;
	*b = *v;
}

int main(void)
{
	int i1 = 10;
	int i2 = 30;
	ft_putnbr(i1);
	ft_putnbr(i2);
	ft_swap(&i1, &i2);
	ft_putnbr(i1);
	ft_putnbr(i2);
	
	return 0;
}