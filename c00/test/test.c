#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}



int main(void) 
{
	int s[2] = {0};
	char a;
	a = s[0] + '0';
	ft_putchar(a);
	

	return(0);
}
