#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb2(void)
{
	ft_putchar('0');
	ft_putchar('0');
	ft_putchar(' ');
	ft_putchar('0');
	ft_putchar('1');
	char a1;
	char b1;
	char a2;
	char b2;
	a1 = '0';
	b1 = '0';
	a2 = '0';
	b2 = '2';
	while (a1 <= '9')
	{
		while (b1 <= '9')
		{
			while (a2 <= '9')
			{
				while (b2 <= '9')
				{
					if ((a1 < a2) || ((a1 == a2) && (b1 < b2)))
					{
						ft_putchar(',');
						ft_putchar(' ');
						ft_putchar(a1);
						ft_putchar(b1);
						ft_putchar(' ');
						ft_putchar(a2);
						ft_putchar(b2);
					}
					b2++;
				}
				a2++;
				b2 = '0';

			}
			b1++;
			a2 = '0';
		}
		a1++;
		b1 = '0';
	}
}

int main(void) 
{
	ft_print_comb2();
	ft_putchar('\n');
	return(0);
}
