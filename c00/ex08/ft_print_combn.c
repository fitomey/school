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



void ft_print_combn(int k)
{	
	int v[9] = {0};
	int num;
	num = 0;
	int flag;
	flag = 0;
	int i;
	i = 1;
	int lim;
	lim = 1;
	int nb;
	nb = 0;
	int ch;
	ch = 0;
	int u;
	u = 0;

	v[0] = 0;
	v[1] = 0;
	v[2] = 0;
	v[3] = 0;
	v[4] = 0;
	v[5] = 0;
	v[6] = 0;
	v[7] = 0;
	v[8] = 0;
	num = 0;


	i = 1;
	lim = 1;
	while (i <= k)
	{
		lim = lim * 10;
		i += 1;
	}

	nb = 0;
	
	
	 while (num < lim)
	 {
		v[0] = 0;
		v[1] = 0;
		v[2] = 0;
		v[3] = 0;
		v[4] = 0;
		v[5] = 0;
		v[6] = 0;
		v[7] = 0;
		v[8] = 0;
		i = lim / 10;
		ch = 0;
		nb = num;
		while (i >= 1)
		{
			v[ch] = nb / i;

			nb = nb % i;
			i = i / 10;
			ch += 1;
		}

	// ft_putchar('-');
	// ft_putchar(v[0]+'0');
	// ft_putchar(v[1]+'0');
	// ft_putchar(v[2]+'0');
	// ft_putchar(v[3]+'0');
	// ft_putchar(v[4]+'0');
	// ft_putchar(v[5]+'0');
	// ft_putchar(v[6]+'0');
	// ft_putchar(v[7]+'0');
	// ft_putchar(v[8]+'0');
	// ft_putchar('-');

		i = k - 1;
		flag = 0;
		
		while (i != 0)
		{
			if (v[i - 1] >= v[i])
			{
				flag = 1;
			}
			i = i - 1;
		}
		

		if (flag == 0)
		{
			if (u == 1)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			i = 0;
			while (i < k)
			{
				ft_putchar(v[i]+'0');
				i = i + 1;
			}
			u = 1;
		}
		num = num + 1;


		
		


	}
}




int main(void) 
{
	ft_print_combn(3);
	
	
	
	ft_putchar('\n');
	return(0);
}