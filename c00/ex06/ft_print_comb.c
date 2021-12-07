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
	int a;
	int b;
	int c;
	
	a = '0' -1;
	while(a++ < '7')
	{
		b = a;	
		while(b++ < '8')
		{
			c = b;
			while(c++ < '9')
			{
				put_char(a);
				put_char(b);
				put_char(c);
			
				if(a != '7')
                		{
                        		put_char(',');
                        		put_char(' ');
                		}
			}
		
		}
	}	
}
