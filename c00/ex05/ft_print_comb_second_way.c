#include <stdio.h>
#include <unistd.h>

void put_char(char c)
{
        write(1,&c,1);
}

void ft_print_comb(void);

void main()
{
        ft_print_comb();
}

void ft_print_comb(void)
{
	int u;
	int d;
	int c;

	int i= 0;	
	
	while(i < 1000)
	{
	++i;
	c = (i /100) + 48;
	d = (i /10) % 10 + 48;
	u = (i % 10) + 48;
	
	if(c == d| c ==u | d ==u )
	continue;
	if(c >d ||d > u)
	continue;

	write(1,&c,1);
	write(1,&d,1);
	write(1,&u,1);
		if(c!=7)
		{
		write(1,", ",2);	
		}
	}
}	
