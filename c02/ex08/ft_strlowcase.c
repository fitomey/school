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

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	while (i != n)
	{
		dest[i] = src[i];
		i += 1;
	}
	dest[i] = '\0';
	return(dest);
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


char *ft_strlowcase(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i += 1;
	}
	return(str);
}

int main(void)
{
	char st[26] = "QWERTYUIOPasdfghjklZXCVBNM";
	st[25]='\0';
	char *s = st;
	ft_putstr(ft_strlowcase(s));
	return 0;
}