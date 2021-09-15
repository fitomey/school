#include <unistd.h>
#include <stdio.h>

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

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		i += 1;
	}
	return(i + 1);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i = 0;
	while (i < size || src[i] == '\0')
	{
		dest[i] = src[i];
		i += 1;
	}
	dest[i] = '\0';

	i = 0;
	while (src[i] != '\0')
	{
		i += 1;
	}
	return(i + 1);
}

void ft_putstr(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i += 1;
	}
}


int ft_strcmp(char *s1, char *s2)
{
	int i;
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i += 1;
	}
	return(s1[i] - s2[i]);
}

int main(void)
{
	char st1[9] = {'q','a','1','0','i','c','o','g','\0'};
	char *pst1 = st1;
	char st2[9] = {'q','a','1','0','a','c','o','g','\0'};
	char *pst2 = st2;
	ft_putnbr(ft_strcmp(pst1,pst2));
	return 0;
}