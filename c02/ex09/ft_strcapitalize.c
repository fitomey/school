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

int is_up(char a)
{
	if (a >= 'A' && a <= 'Z')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}

int is_low(char a)
{
	if (a >= 'a' && a <= 'z')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}

int is_num(char a)
{
	if (a >= '0' && a <= '9')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}

char *ft_strcapitalize(char *str)
{
	if (is_low(str[0]) == 1)
	{
		str[0] = str[0] - 32;
	}
	if (str[0] != '\0')
	{
		int i;
		i = 1;
		while (str[i] != '\0')
		{
			if (is_up(str[i]) == 1)
			{
				if (is_up(str[i-1]) + is_low(str[i-1]) + is_num(str[i-1]) != 0)
				{
					str[i] = str[i] + 32;
				}
			}
			if (is_low(str[i]) == 1)
			{
				if (is_up(str[i-1]) + is_low(str[i-1]) + is_num(str[i-1]) == 0)
				{
					str[i] = str[i] - 32;
				}
			}
			i += 1;
		}
	}
	return(str);
}

int main(void)
{
	char st[62] = "salUT, comment tu vas ? 42mots quarante-deux; cinquante+et+unc";
	st[61]='\0';
	char *s = st;
	ft_putstr(ft_strcapitalize(s));
	return 0;
}