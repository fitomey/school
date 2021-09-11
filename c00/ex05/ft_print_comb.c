#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb(void)
{
	char a;
	char b;
	char d;
	a = '0';
	b = '0';
	d = '0';
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (d <= '9')
			{
				if ((a < b) && (b < d))
				{
					ft_putchar(a);
					ft_putchar(b);
					ft_putchar(d);
					ft_putchar(' ');
				}
				d++;

			}
			d = '0';
			b++;
		}
		b = '0';
		a++;
	}
}

int main(void) 
{
	ft_print_comb();
	ft_putchar('\n');
	return(0);
}
