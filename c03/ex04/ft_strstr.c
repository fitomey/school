#include <unistd.h>
#include <stdio.h>
#include <string.h>


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
	return(i);
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


char *ft_strstr(char *str, char *to_find)
{
	int k = 0;
	int i = 0;
	int flag = 0;
	if (to_find[0] == '\0')
	{
		return(str);
	}
	else
	{
		while (str[i] != '\0' && flag == 0)
		{
			k = 0;
			while (str[i + k] != '\0' && to_find[k] != '\0' && str[i + k] == to_find[k])
			{
				k += 1;
			}
			if (to_find[k] == '\0')
			{
				flag = 1;
			}
			i += 1;
		}
		if (flag == 1)
		{
			char *pstr = str + i - 1;
			return(pstr);
		}
		else
		{
			return(NULL);
		}
		
	}
}

int main(void)
{
	// char st1[] = "qa100000676767";
	// char st2[] = "1";
	// char st1[] = "qa100000676767";
	// char st2[] = "qa100000676767";
	// char st1[] = "qa100000676767";
	// char st2[] = "";
	// char st1[] = "qa100000676767";
	// char st2[] = "qqqqqqqqqqqqqqqqqqq";
	// char st1[] = "qa1000006767678";
	// char st2[] = "7";
	char st1[] = "";
	char st2[] = "";
	printf("%s", strstr(st1,st2));
	printf("%s", ft_strstr(st1,st2));
	return 0;
}